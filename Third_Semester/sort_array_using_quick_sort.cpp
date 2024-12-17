#include <iostream>
using namespace std;
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int left = low, right = high;

    while (left < right) {
        while (arr[left] <= pivot && left <= high) {
            left++;
        }
        while (arr[right] > pivot && right >= low) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
        }
    }
    swap(arr[low], arr[right]);
    return right;
}
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int location = partition(arr, low, high);
        quicksort(arr, low, location - 1);
        quicksort(arr, location + 1, high);
    }
}
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n, i;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nUnsorted array: ";
    print_array(arr, n);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    print_array(arr, n);

    return 0;
}