#include<iostream>
using namespace std;
class data
{
    private:
    int credit;
    protected:
    int id;
    public:
    void setdata(int c,int i)
    {
        credit=c;
        id=i;
    }
    void display()
    {
        cout<<"Credit:"<<credit<<endl;
        cout<<"ID:"<<id<<endl;
    }
};
int main()
{
    data d;
    d.setdata(7663,2801);
    d.display();    
    return 0;
}