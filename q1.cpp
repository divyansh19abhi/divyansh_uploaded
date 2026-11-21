#include<iostream>
using namespace std;
class person{
    public:
    string name = "tomar";
};
class student:virtual public person{
    public:
    int roll =101;
};
class employee:virtual public person{
    public:
    int id=501;
};
class teachingassistant:public student, public employee{
    public:
    void display(){
        cout<<"NAAM "<<name<<endl;
        cout<<"Roll no"<<roll<<endl;
        cout<<"EMPLOYEE UID"<<id<<endl;
    }
};
int main(){
    teachingassistant t;
    t.display();
    return 0;
}         