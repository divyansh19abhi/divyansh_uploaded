#include<iostream>
using namespace std;
class customer
{
    public:
    int price;
    customer(int p)
    {
        price =p;
    }
    void display()
    {
        cout<<"Price :"<<price<<endl;
    }
};
int main()
{
    customer c1(30404);
    customer c2(50000);
    customer c3(19203);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}  