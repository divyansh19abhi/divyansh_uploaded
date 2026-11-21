#include<iostream>
using namespace std;
class person{
    public:
    string name="yashu";
};
class men:public person{
    public:
    int age =27;
};
class pension:public men{
    public:
    int salary = 500;
    void display(){
        cout<<"NAME= "<<name<<endl;
        cout<<"UMAr = "<<age<<endl;
        cout<<"PASia = "<<salary<<endl;
    }
};
int main(){
    pension p;
    p.display();
    return 0;
}