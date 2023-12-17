#include<bits/stdc++.h>
using namespace std;
vector<int>prevSmallerIdx(vector<int>arr){
    vector<int>ans;
    stack<int>s;
    for(int i=0;i<arr.size();i++){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            s.pop();
        }
        if(s.empty())ans.push_back(-1);
        else{
            ans.push_back(s.top());
        }
            s.push(i);
    }
    return ans;
}
int main(){
    vector<int>arr={55,10,25,34,35,36};
    vector<int>ans=prevSmallerIdx(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\t";
    }
    return 0;
}



