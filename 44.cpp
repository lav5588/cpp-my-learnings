// decimal to hexaecimal

#include<bits/stdc++.h>
using namespace std;
string decimalToHexadecimal(int n){
    int x=1;
    string ans="";
    while(x<=n) x*=16;
    x/=16;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if(lastdigit<=9)ans=ans+to_string(lastdigit);
        else{
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimalToHexadecimal(n);
    return 0;
}