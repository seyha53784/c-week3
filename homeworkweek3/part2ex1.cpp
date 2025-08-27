#include <iostream>
using namespace std;

//time complexity of bubble sort
// best case:   0(n^2)
// Average Case 0(n^2)
// worse Case:  0(n^2)

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {

    int numbers[10];
    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    cout << "you entered: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << endl;
    }
    cout << endl;
    bubbleSort(numbers, 10);
    cout << "sorted number: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}