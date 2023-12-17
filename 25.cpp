//number pattern
//    1
//   1 2
//  1 2 3
// 1 2 3 4
//1 2 3 4 5


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int j;
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        int count=1;

        for(;j<=(n);j++){
            cout<<count<<" ";
            count++;
            

            }cout<<endl;

            
        }

    
    return 0;
}