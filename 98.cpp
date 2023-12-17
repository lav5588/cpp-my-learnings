// lower and uppercase using transform() function


 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    string str="lavKumaryadav";
   transform(str.begin(),str.end(),toupper);
    cout<<str<<endl;
   transform(str.begin(),str.end(),tolower);
    cout<<str<<endl;
     return 0;
 }