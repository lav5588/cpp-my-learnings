#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Input two numbers: ";
    cin>>a>>b;
    char op;
    cout<<"Input operator: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;    
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        cout<<"enter another operator";
        break;
    }
return 0;
}