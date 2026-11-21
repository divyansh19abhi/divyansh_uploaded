#include<iostream>
using namespace std;
class student{
    public:
    int marks=10;
    private:
    int age = 836;
    public:
    void display(){
        cout<<"MARKS"<<marks<<endl;
        cout<<"AGE"<<age<<endl;
    }
};
int main(){
    student s;
    s.display();
    return 0;
}