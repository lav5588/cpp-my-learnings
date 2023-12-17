#include<bits/stdc++.h>
using namespace std;
vector<int>prevSmaller(vector<int>arr){
    vector<int>ans;
    stack<int>s;
    for(int i=0;i<arr.size();i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty())ans.push_back(-1);
        else{
            ans.push_back(s.top());
        }
            s.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int>arr={55,10,25,34,35,36};
    vector<int>ans=prevSmaller(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\t";
    }
    return 0;
}



