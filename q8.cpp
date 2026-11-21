#include<iostream>
using namespace std;
class student{
    private:
    int marks=93;
    public:
    friend void display(student s);
};
void display(student s){
    cout<<"marks  "<<s.marks;
}
int main(){
    student s;
    display(s);
    return 0;
}