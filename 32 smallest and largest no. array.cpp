#include<iostream>
using namespace std;

// Find the largest and the smallest number in array

int main(){

    int n, key;
    cin>>n;

    int a[1000];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    // Algorithm to find the largest and the smallest number

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i = 0; i<n; i++){
        largest = max(largest,a[i]);
        smallest = min(smallest,a[i]);
    }

    cout<<"largest value "<<largest<<endl;
    cout<<"smallest value "<<smallest<<endl;

return 0;
}
