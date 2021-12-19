#include "base.h"
#include <iostream>
#include <thread>
#include <future>
#include <time.h>

using namespace std;

int main() {
    srand(time(NULL));
    
    int* arr = defineArray(ARRAY_LENGTH);
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        arr[i] = rand() % 10;
    }

    auto future1 = async(computeAvg, arr, 0 * (ARRAY_LENGTH / 4), 1 * (ARRAY_LENGTH / 4));
    auto future2 = async(computeAvg, arr, 1 * (ARRAY_LENGTH / 4), 2 * (ARRAY_LENGTH / 4));
    auto future3 = async(computeAvg, arr, 2 * (ARRAY_LENGTH / 4), 3 * (ARRAY_LENGTH / 4));
    auto future4 = async(computeAvg, arr, 3 * (ARRAY_LENGTH / 4), 4 * (ARRAY_LENGTH / 4));

    double v1 = future1.get();
    double v2 = future2.get();
    double v3 = future3.get();
    double v4 = future4.get();

    cout << (v1 + v2 + v3 + v4) / 4;

    return 0;
}