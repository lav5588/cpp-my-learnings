
//page allocation problem




#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
    int studentsrequired=1,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(sum+arr[i]>mid){
            studentsrequired++;
            sum=arr[i];
            if(studentsrequired>m)return false;
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}

int allocatMinPages(int arr[], int n, int m){
    int sum=0;
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++)sum+=arr[i];
    int start=0,end=sum,ans=INT_MAX;
    while(start<end){
        int mid=(start+end)/2;
        if(isPossible(arr,n,m,mid)){
            ans = min(mid, ans);

            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<"The minimum number of pages : "<<allocatMinPages(arr,n,m)<<endl;
    return 0;
}