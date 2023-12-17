

#include<iostream>
using namespace std;
class student{
    string name;
    public:
    void setName(string s){
        name=s;
    }
    void printInfo(){
        cout<<"Name="<<name<<endl;
    }
};
int main(){
    student a;
    string s;
    cout<<"name=";
    cin>>s;
    a.setName(s);
    a.printInfo();
    return 0;
}