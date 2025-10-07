#include<iostream>
using namespace std;

void spiralprint(int a[][50], int m, int n){

    int startrow = 0;
    int startcol = 0;
    int endrow = m-1;
    int endcol = n-1;

    // Print it
    while(startrow <= endrow and startcol <= endcol){

        //First row

        for(int i = startcol; i<=endcol; i++){
            cout<<a[startrow] [i]<<" ";
        }
        startrow++;

        for(int i = startrow; i<= endrow; i++){
            cout<<a[i] [endcol]<<" ";
        }
        endcol--;

        // Bottom row
        if(endrow > startrow){
            for(int i=endcol; i>=startcol; i--){
                cout<<a[endrow][i]<<" ";
            }
            endrow--;
        }

        // Start col
        if(endcol > startcol){
            for(int i=endrow; i>=startrow; i--){
                cout<<a[i] [startcol]<<" ";
            }
            startcol++;
        }
    }
}

int main(){

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

    spiralprint(a, m, n);

return 0;
}
