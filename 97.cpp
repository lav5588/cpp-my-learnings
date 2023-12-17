// to convert uppercase to  lowercase


 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
    string str="LAVKUMARYADAV";
    for (int i=0;i<str.size();i++)if(str[i]>='A' && str[i]<='Z')str[i]-=('A'-'a');
    cout<<str<<endl;
     return 0;
 }