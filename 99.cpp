// form the biggest number from the numeric string


 #include<bits/stdc++.h>
 #include<algorithm>
 using namespace std;
 int main(){
    string s="235369696605";
    sort(s.begin(),s.end(),greater<int>(1));
    cout<<s;
     return 0;
 }