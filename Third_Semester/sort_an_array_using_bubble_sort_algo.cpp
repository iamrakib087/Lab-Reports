#include<iostream>
using namespace std;

int main() {
    int i, n, temp, j;
    cout << "\nEnter the size of array: ";
    cin >> n;
    int array[n];
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "\nSorted array: ";
    for (i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
