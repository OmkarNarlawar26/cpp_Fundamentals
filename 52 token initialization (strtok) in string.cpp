#include<iostream>
#include<cstring>
using namespace std;

// char *strtok(char *s, char *delimers)
//return a token on each subsequent call
//on the first call function should passed with string argument for s
//on subsequent calls we should pass the string argument as null

int main(){

    char s[50] = "Today is a rainy day";

    char *ptr = strtok(s, " ");
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = strtok(NULL, " ");
        cout<<ptr<<endl;
    } 

return 0;
}
