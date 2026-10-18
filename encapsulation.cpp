#include<iostream>
using namespace std;
class student
{
    private:
    int marks;
    public:
    void setmarks(int m)
    {
        marks=m;
    }
    void display()
    {
        cout<<"Marks :"<<marks<<endl;
    }
};
int main()
{
    student s;
    s.setmarks(100);
    s.display();
    return 0;
}