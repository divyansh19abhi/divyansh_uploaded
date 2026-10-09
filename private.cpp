#include<iostream>
using namespace std;
class bank
{
    private:
        int balance ;
    public:
       void deposit(int amount)
       {
        balance = amount;
       }
       void display()
       {
        cout<<"balance is:"<<balance;
       }
};
int main()
{
    bank b;
    b.deposit(50000);
    b.display();
    return 0;
}