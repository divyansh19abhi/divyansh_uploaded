#include<iostream>
using namespace std;
class calculator{
    public:
    void add(int a, int b)
    {
        cout<<a+b<<endl;
    }
    void subtract(int c, int d)
    {
        cout<<c-d<<endl;
    }
    void multiply(float e,float f, float g)
    {
        cout<<e*f*g<<endl;
    }
};
int main()
{
    calculator obj; 
    obj.add(5,10);
    obj.subtract(990,567) ;
    obj.multiply(7,34,21);
    return 0;
}