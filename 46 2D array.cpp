#include<iostream>
using namespace std;

int main() {
    int a[50][50];
    int m, n;
    cin >> m >> n;

    // Iteration over the array
    int val = 1;

    for (int row = 0; row <= m - 1; row++) {
        for (int col = 0; col <= n - 1; col++) {
            a[row][col] = val;
            val = val + 1;
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
