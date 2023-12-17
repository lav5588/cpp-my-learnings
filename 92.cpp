//to get no of characters in a string


 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
    string s1="nincompoop";
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;
    for (int i=0;i<s1.size();i++)cout<<s1[i]<<endl;
     return 0;
 }