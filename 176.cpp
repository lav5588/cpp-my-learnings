// Balanced Parathesis

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool isValid(string s){
    int n=s.size();
    stack<char>st;
    
    for(int i=0;i<n;i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='(' ){
            st.push(s[i]);
        }
        else if(s[i]==')' ){
            if(st.top()=='('   && !st.empty()) st.pop();
            else{
                return false;
            }
        }
        else if(s[i]=='}' ){
            if(st.top()=='{'   && !st.empty()) st.pop();
            else{
                return false;
            }
        }
        else if(s[i]==']' ){
            if(st.top()=='['   && !st.empty()) st.pop();
            else{
                return false;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
        return true;
}
int main(){
    cout<<isValid("({[{({[]})}]})")<<endl;
    cout<<isValid("[{()]}");
    return 0;
}