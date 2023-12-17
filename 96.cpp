// to convert lowercase to  uppercase


 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
    string str="lavkumaryadav";
    for (int i=0;i<str.size();i++)if(str[i]>='a' && str[i]<='z')str[i]-=('a'-'A');
    cout<<str<<endl;
     return 0;
 }