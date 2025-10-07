#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    if (l > r) return -1;
    int m = l + (r - l) / 2;
    return arr[m] == x ? m : (arr[m] > x ? binarySearch(arr, l, m - 1, x) : binarySearch(arr, m + 1, r, x));
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    cout << (result != -1 ? "Element found at index " + to_string(result) : "Element not found") << endl;
    return 0;
}
