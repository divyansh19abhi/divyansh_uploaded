#include<iostream>
using namespace std;
class person{
    public:
    string name ="aashu joshila";
    void displayname(){
        cout<<"Men name= "<<name<<endl;
    }
};
class student:public person{
    public:
    int roll= 23;
    void display(){
        cout<<"ROLL no = "<<roll<<endl;
    }
};
int main(){
    student s;
    s.displayname();
    s.display();
    return 0;
}