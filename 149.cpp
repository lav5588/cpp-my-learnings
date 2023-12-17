

#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    bool gendre;
    public:
    student(string s,int a,bool g){
        name=s;
        age=a;
        gendre=g;
    } //parameterised constructor
    void printInfo(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"Gendre="<<gendre<<endl;
    }
};
int main(){
    student a("Urvi",20,1);
    a.printInfo();
    return 0;
}