#include<iostream>
using namespace std;

int main() {

//Initialization of an array
int a[10] = {0};

//Size of
cout<<sizeof(a)<<endl;
int n = sizeof(a)/sizeof(int);
cout<<n<<endl;

//input all the elements from the user
for(int i = 0; i<5; i++){
    cin>>a[i];
}

//update a single index
//a[8] = 100;

//Print all the first 10 elements
for(int i = 0; i<10; i++){
    cout<<a[i]<<" ,";
}

return 0;
}
