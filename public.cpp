#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }

};
int main()
{
    student s1;
    cout<<"Enter name: ";
    cin>>s1.name;
    cout<<"Enter roll no: ";
    cin>>s1.rollno;
    s1.display();
    return 0;
}