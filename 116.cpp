// check if an array  is sorted or not

#include<iostream>
using namespace std;
bool sorted(int array[],int n){
    if(n==1) return true;
    bool restarray=sorted(array+1,n-1);
    return (array[0]<array[1] && restarray);
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,5)<<endl;
    return 0;
}