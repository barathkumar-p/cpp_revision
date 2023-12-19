#include<iostream>
#include<algorithm>
using namespace std;

void zigzagArrange(int arr[], int n) {
    // Sort the array
    sort(arr, arr + n);

    // Swap adjacent elements to create zig-zag pattern
    for (int i = 1; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size.\n";
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Rearrange the array in zig-zag fashion
    zigzagArrange(arr, n);

    // Display the zig-zag arranged array
    cout << "Zig-zag arranged array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
