#include<iostream>
using namespace std;
class student{
    public :
    void name(string a)
    {
        cout<<a<<endl;
    }
    void age(int b)
    {
        cout<<b<<endl;
    }
    void marks(float c)
    {
        cout<<c<<endl;
    }
};
int main()
{
    student obj;  

    obj.name("Divyansh"); 
    obj.age(19);
    obj.marks(99.09);

    return 0;
}