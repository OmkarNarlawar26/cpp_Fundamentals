#include<iostream>
using namespace std;

// Linear search

// Aparticular element in the array

int main(){

    int n, key;
    cin>>n;

    int a[1000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //ask for the element we want to search
    cout<<"Enter the element you want to search : ";
    cin>>key;

    //Find out the index of that element by traversing the array
    //Linear search algorithm
    int i;
    for(i=0; i<=n-1; i++){
        if(a[i]==key){
            cout<<key<<" is found at "<<i<<" index";
            break;
        }
    }
    if(i==n){
        cout<<key<<" is not present "<<endl;
    }

    return 0;
}
