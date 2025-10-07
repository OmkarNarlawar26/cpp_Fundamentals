#include<iostream>s
using namespace std;

// Pass by Reference using Pointers
// This function uses a pointer to modify the original variable.
void increment(int *aptr) {
    // Dereference the pointer to access and modify the original variable's value
    *aptr = *aptr + 1;
    cout << "Increment Function (using pointer): " << *aptr << endl;
}

// Pass by Reference using Reference Variable
// This function uses a reference variable to directly access the original variable.
void increment_1(int &aptr) {
    // Directly modify the variable referenced by aptr
    aptr = aptr + 1;
    cout << "Increment Function (using reference): " << aptr << endl;
}

int main() {
    int value = 5;

    // Call increment using pointer
    increment(&value); // Pass the address of value

    // Call increment_1 using reference
    increment_1(value); // Pass the variable directly

    return 0;
}
