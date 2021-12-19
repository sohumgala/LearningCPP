#include "base.h"
#include <iostream>
#include <time.h>

using namespace std;

int main() {
    srand(time(NULL));

    int* arr = defineArray(ARRAY_LENGTH);
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        arr[i] = rand() % 10;
    }

    // single call to compute avg
    cout << computeAvg(arr, 0, ARRAY_LENGTH);

    delete arr;
    return 0;
}

