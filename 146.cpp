//OOPS

#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gendre;
    void printinfo(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"Gendre="<<gendre<<endl;
    }
};
int main(){
    student a;
    a.name="Urvi";
    a.age=20;
    a.gendre=1;
    a.printinfo();
    return 0;
}