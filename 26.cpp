//palindromic pattern
//    1
//   212
//  32123
// 4321234
//543212345


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int j;
        for (j=1;j<=n-i;j++){
            cout<<" ";
        }
        int count=i;
        for(;j<=n;j++){
            cout<<count;
            count--;
        }
        count++;
        for(;j<=(n+i-1);j++){
            count++;
            cout<<count;
        }
        cout<<endl;
    }
    return 0;
}