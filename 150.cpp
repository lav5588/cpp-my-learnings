

#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    bool gendre;
    public:
    student(){
        cout<<"default constructor"<<endl;
    }
    student(string s,int a,bool g){
        cout<<"parameterised constructor"<<endl;
        name=s;
        age=a;
        gendre=g;
    }
    student(student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gendre=a.gendre;
    }//destructor destroy the objects
    ~student(){
        cout<< "destructor called"<<endl;
    }
};
int main(){
    student a("Urvi",20,1);
    student b;
    student c=a;
    return 0;
}