//matrix multiplication

#include<iostream>
using namespace std;
int main(){
     int n,m,p;
    cin>>n>>m>>p;
    int arr1[n][m];
    int arr2[m][p];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr1[i][j];
    for(int i=0;i<m;i++)for(int j=0;j<p;j++)cin>>arr2[i][j];
    int ans[n][p];
    for(int i=0;i<n;i+)for(int j=0;j<p;j++){
        int ans[i][j]=0;
        for (int k=0;k<m;k++)ans[i][j]+=arr1[i][k]*arr2[k][j];
    }
    for(int i=0;i<n;i++)for(int j=0;<p;j++)cout<<ans[i][j];
    return 0;
}