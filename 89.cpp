//to erase character from string



 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
    string s1="nincompoop";
    cout<<s1<<endl;
    s1.erase(3,3);
    cout<<s1<<endl;
     return 0;
 }