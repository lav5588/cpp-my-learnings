//permutation

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begim(),a.end()));
    for(auto v:ans){
        for(auto i:v) cout<<i<<"";
        cout<<"\n";
    }
    return 0;
}