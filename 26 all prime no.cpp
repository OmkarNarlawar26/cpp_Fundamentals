#include<iostream>
using namespace std;

bool isprime(int n) {
    for(int i = 2; i <= n-1; i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

// Write a function to print all prime upto n
void printprimes(int N){

    for(int i=2; i<=N; i++){
        if(isprime(i)) {
            cout << i << " ";
        }
    }
}

int main(){

    //check if a given number is prime
    int n;
    cin >> n;
    printprimes(n);

return 0;
}
