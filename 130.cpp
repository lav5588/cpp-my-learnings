// Tilling problem

// Given a 2*n board and tiles of size 2*1 count the no of ways to tile the given board using these tiles

#include<iostream>
using namespace std;
int tillingways(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return tillingways(n-1)+tillingways(n-2);
}
int main(){
    cout<<tillingways(4);
    return 0;
}