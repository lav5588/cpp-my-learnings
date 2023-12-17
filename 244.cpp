
//merge k sorted arrays

#include<bits/stdc++.h>
using namespace std;


#define rep(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define ff first
#define ss second
#define vi vector<int>




signed main(){
    int k;
    cin>>k;
    vector<vector<int>>a(k);  //creation of 2d vector
    rep(i,0,k){
        int size;
        cin>>size;
        a[i]=vector<int>(size);
        rep(j,0,size){
            cin>>a[i][j];
        }
    }
    vector<int>idx(k,0);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    rep(i,0,k){
        pq.push({a[i][0],i});
    }
    vi ans;
    while(!pq.empty()){
        pii x=pq.top();
        pq.pop();
        ans.push_back(x.ff);
        if(idx[x.ss]+1<a[x.ss].size())
            pq.push({a[x.ss][idx[x.ss]+1],x.ss});
        idx[x.ss]+=1;
    }

    rep(i,0,ans.size()){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}