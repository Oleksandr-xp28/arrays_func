// arrays_func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void sortArray(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        if (i % 2 == 0) {
            while (j > 0 && arr[j] > arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
        else {
            while (j > 0 && arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }
}

int main() {
    int arr[] = { 5, 3, 1, 4, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
