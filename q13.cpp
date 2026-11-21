#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    student(){
        roll=0;
        name="no";
    }
    student(int r, string n){
        roll=r;
        name =n;
    }
    void display(){
        cout<<"Roll no="<<roll<<endl;
        cout<<"Name="<<name<<endl;
    }
};
int main(){
    student s1;
    student s2(1,"vikas");
    s1.display();
    s2.display();
    return 0;
}