#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;
    employee(int i, string n, float s){
        id=i;
        name=n;
        salary=s;
    }
    void display(){
        cout<<"employee id="<<id<<endl;
        cout<<"employee name="<<name<<endl;
        cout<<"employee salary="<<salary<<endl;
    }
};
int main(){
    employee e(7017,"vibhor",10000.0) ;
    e.display();
    return 0;
}