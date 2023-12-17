// WAP to check if a given number is power of 2 or not 

#include<iostream>
using namespace std;
bool isPower(int n){
    return (n && !(n&(n-1)));
}
int main(){
    cout<<isPower(16);
    return 0;
}