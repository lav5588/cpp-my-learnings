//operator overloading

#include<iostream>
using namespace std;
class student {
    string name;
    int age;
    bool gendre;
    public:
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
    }
    bool operator ==(student &a){
        if(name==a.name &&age==a.age && gendre==a.gendre){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    student a("Urvi",20,1);
    student b("Rahul",21,0);
    student c=a;
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    if(b==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}