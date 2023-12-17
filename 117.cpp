// print numbers till n
// 1. decreasing order
// 2. increasing order


#include<iostream>
using namespace std;
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<"\t";
}
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<"\t";
    dec(n-1);
}
int main(){
    int n;
    cin>>n;
    inc(n);
    cout<<"\n\n\n";
    dec(n);
    return 0;
}