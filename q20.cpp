#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;
    void display(){
        cout<<"employee id="<<id<<endl;
        cout<<"NAME="<<name<<endl;
        cout<<"annual salary="<<salary*12<<endl;
    }
};
int main()
{
    employee e;
    e.id= 111;
    e.name =" sarthak";
    e.salary= 1000.00;
    e.display();
    return 0;
}