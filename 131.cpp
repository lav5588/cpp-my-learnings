// friends pairing problem

// find the no of ways in which n friends can remain single or can be paired up


#include<iostream>
using namespace std;
int friendspairing(int n){
    if(n==0 || n==1|| n==2) return n;
    return friendspairing(n-1)+friendspairing(n-2)*(n-1);
}
int main(){
    cout<<friendspairing(4);
    return 0;
}