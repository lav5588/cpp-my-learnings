#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
const int N=1e5+2,MOD=1e9+7;

int dp[N];
int minSquare(int n){
    if(n==0 || n==1 || n==2 || n==3)return n;
    if(dp[n]!=MOD)return dp[n];
    
    for(int i=1; i*i<=n;i++){
        //memoization
        dp[n]=min(dp[n],1+minSquare(n-i*i));
    }
    return dp[n];
}


int main(){
    int n;
    cin>>n;
    rep(i,0,N){
        dp[i]=MOD;
    }
    cout<<minSquare(n)<<endl;
    return 0;
}