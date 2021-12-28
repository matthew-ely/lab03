#include <iostream>
#include <cstdlib>
#include "arrayutil.h"

using namespace std;

int main() {
    // TEST 1
    int const l = 3;
    int arr[l] {3, 5, 0};

    for (int a : arr) {
        cout << a << "  ";
    } // for
    cout << endl << "highest value: " << getMax(arr, l) << endl;
    cout << "mean: " << getMean(arr, l) << endl;
    cout << "sorting..." << endl;
    sortArray(arr, l);
    for (int a : arr) {
        cout << a << "  ";
    } // for
    cout << endl << "variance: " << getVar(arr, l) << endl;

    // TEST 2
    int const m = 6;
    int arr2[m] {30, 1, 8, 65, 12, 11};
    cout << endl;
    for (int a : arr2) {
        cout << a << "  ";
    } // for
    cout << endl << "highest value: " << getMax(arr2, m) << endl;
    cout << "mean: " << getMean(arr2, m) << endl;
    cout << "sorting..." << endl;
    sortArray(arr2, m);
    for (int a : arr2) {
        cout << a << "  ";
    } // for
    cout << endl << "variance: " << getVar(arr2, m) << endl;

    // TEST 3
    int const n = 5;
    int arr3[n] {40, 7, 34, 181, 2};
    cout << endl;
    for (int a : arr3) {
        cout << a << "  ";
    } // for
    cout << endl << "highest value: " << getMax(arr3, n) << endl;
    cout << "mean: " << getMean(arr3, n) << endl;
    cout << "sorting..." << endl;
    sortArray(arr3, n);
    for (int a : arr3) {
        cout << a << "  ";
    } // for
    cout << endl << "variance: " << getVar(arr3, n) << endl;

    return 0;
} // main
