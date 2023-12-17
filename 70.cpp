//2d matrix search if array is sorted
//brute force approach

#include<iostream>
using namespace std;
int main(){
    int n,m,key,flag=0;
    cin>>n>>m>>key;
    int arr[n][m];
   for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
   for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(arr[i][j]==key){
    cout<<"found";
    flag=1;
   }
   if (!flag)cout<<"not found";
    return 0;
}