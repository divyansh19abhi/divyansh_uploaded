#include<iostream>
using namespace std;
class amount
{
    private:
    int balance;
    public:
    void setbalance(int b)
    {
        balance=b;
    }
    void display()
    {
        cout<<"balnce: "<<balance<<endl;
    }
};
int main()
{
    amount a;
    a.setbalance(7864);
    a.display();
    return 0;
}
