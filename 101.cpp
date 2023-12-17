// bit manipulation
//  get bit

#include<iostream>
using namespace std;
int getBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int main(){
    cout<<getBit(5,2);
    return 0;
}

//setbit
// n| (1<<i)

//clearBit
//n& (~(1<<i))


//update bit=clear bit+setbit(with given number)