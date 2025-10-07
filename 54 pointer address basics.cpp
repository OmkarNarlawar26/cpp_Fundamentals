#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int z = 20;
    cout<<&x<<endl;

    float y = 10.5;
    cout<<&y<<endl;

    //It doesnt work for character variables
    char ch = 'A';
    //Explict typecasting from char* to void
    cout<<(void *)&ch<<endl;

    //Pointer

    int *xptr;
    //store the address of a variable
    xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    // Re-assign another address to the variable
    xptr = &z;
    cout<<&z<<endl;
    cout<<xptr<<endl;


return 0;
}
