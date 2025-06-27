#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    if (start >= end) return;  // base case
    swap(arr[start], arr[end]);
    reverse(arr, start + 1, end - 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The contents of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, 0, n - 1);

    cout << "After reversing, the contents of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

