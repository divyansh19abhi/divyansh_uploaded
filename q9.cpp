#include<iostream>
using namespace std;
class person{
    protected:
    int age;
    string name;
};    
class man:public person{
    public:
    void input(){
        age=13;
        name="sneha";
    }
    void display(){
        cout<<"aghe"<<age<<endl;
        cout<<"names"<<name<<endl;
    }
};    
int main(){
    man m;
    m.input();
    m.display();
    return 0;
