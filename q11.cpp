#include<iostream>
using namespace std;
class student{
    public:
    int marks=123;
    private:
    int age=87;
    protected :
    int iq= 9 ;
    public:
    void display(){
        cout<<"Marks"<<marks<<endl;
        cout<<"Aage"<<age<<endl;
        cout<<"DImaag"<<iq<<endl;
    }
};
int main(){
    student s;
    s.display();
    return 0;
}