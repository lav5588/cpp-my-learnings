// Largest rectangle in a histogram : Brute Force Approach

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={2,1,5,6,2,3};
    int ans=0;
    int n=6;
    for(int i=0;i<n;i++){
        int minh=a[i];
        for(int j=i;j<n;j++){
            minh=min(a[j],minh);
            int len=j-i+1;
            ans=max(ans,len*minh);
        }
    }
    cout<<ans<<endl;
    return 0;
}