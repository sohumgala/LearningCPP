#include "base.h"

int* defineArray(int numElements) {
    int* arr = new int[numElements];
    return arr;
}

double computeAvg(int* arr, int first, int last) {
    int sum = 0;
    for (int i = first; i < last; i++) {
        sum += arr[i];
    }
    return (double) sum / (last - first);
}