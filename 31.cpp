//Given number is armstrong or not


#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    int temp=n;
    while(n){
        sum+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    if(sum==temp){
        cout<<"Armstrong";
    }
    else{
        cout<<"not a armstrong";
    }
    return 0;
}