// binary to decimal


#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
       ans+=( n%10)*x;
      x*=2;
       n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
    return 0;
}