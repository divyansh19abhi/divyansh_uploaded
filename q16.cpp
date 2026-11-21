#include<iostream>
using namespace std ;
class student{
    public:
    int roll;
    string name;
    float marks;
    student (){
        roll=19;
        name="divyansh";
        marks=99.0;    
    }
    void display(){
        cout<<"Roll no="<<roll<<endl;
        cout<<"Name ="<<name<<endl;
        cout<<"Marks ="<<marks<<endl;
    }
};
int main(){
    student s;
    s.display();
    return 0;
}  