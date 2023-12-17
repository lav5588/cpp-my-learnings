#include<bits/stdc++.h>
using namespace std;
vector<int>nextSmallerIdx(vector<int>arr){
    vector<int>ans(arr.size());
    stack<int>s;
    for(int i=arr.size()-1;i>=0;i--){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            s.pop();
        }
        if(s.empty())ans[i]=-1;
        else{
            ans[i]=s.top();
        }
            s.push(i);
    }
    return ans;
}
int main(){
    vector<int>arr={55,10,25,34,35,36};
    vector<int>ans=nextSmallerIdx(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\t";
    }
    return 0;
}



