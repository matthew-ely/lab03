#include <iostream>
#include "arrayutil.h"

using namespace std;

int getMax(int arr[], int length) {
    int max = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } // if
    } // for
    return max;
} // getMax

double getMean(int arr[], int length) {
    double mean = 0;
    for (int i = 0; i < length; i++) {
        mean += arr[i];
    } // if
    mean /= length;
    return mean;
} // getMean

void sortArray(int arr[], int length) {
    int temp, temp1;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[i];
                temp1 = arr[j];
                arr[i] = temp1;
                arr[j] = temp;
            } // if
        } // for
    } // for
} // sortArray

double getVar(int arr[], int length) {
    double val1 = 0;
    double val2 = 0;
    for (int i = 0; i < length; i++) {
        val1 += (arr[i] * arr[i]);
        val2 += arr[i];
    } // for
    val1 /= length;
    val2 /= length;
    val2 *= val2;
    return val1 - val2;
} // getVar
