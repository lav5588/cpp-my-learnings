//2d matrix search if array is sorted
//optmised approach

#include<iostream>
using namespace std;
int main(){
     int n,m,key,row=0,column=m-1,flag=0;
    cin>>n>>m>>key;
    int arr[n][m];
   for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>arr[i][j];
   while(row<n && column>=0){
    if(arr[row][column]==key){
        cout<<"found";
        flag=1;
    }
    else if(arr[row][column]>key) column--;
    else row++;
   }
   if(!flag)cout<<"not found";
    return 0;
}