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
    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"name=";
        cin>>arr[i].name;
        cout<<"age=";
        cin>>arr[i].age;
        cout<<"gendre=";
        cin>>arr[i].gendre;
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    return 0;
}