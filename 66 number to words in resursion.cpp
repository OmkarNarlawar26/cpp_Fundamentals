#include<iostream>
using namespace std;
// problem
// Number to spellings

// 2048 ---> two hundred one

char words[][10] = {"zero", "one", "two", "two", "three", "four", "five", "six", "seven", "eight", "nine",};

void printspellings(int n){

    // Base case
    if(n==0){
        return;
    }

    // Recursive case first print the spelling of (204)
    printspellings(n/10);
    int digit = n%10;
    cout<<words[digit]<<" ";
    return;
}

int main(){

    int n;
    cin>>n;
    
    printspellings(n);

}
