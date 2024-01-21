#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
const int N=1e3+2,MOD=1e9+7;

int fib(int n){
    if(n==0 || n==1)return 0;
    if(n==2)return 1;
    return fib(n-1)+fib(n-2);

}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}