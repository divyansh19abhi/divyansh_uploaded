#include<iostream>
using namespace std;
class bankaccount
{
    private:
    int accno;
    string name;
    float balance;
    public:
    bankaccount(int a, string n, float b)
    {
        accno = a;
        name = n;
        balance = b;
    }
    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    void display()
    {
        cout << "Account Number: " << accno << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    bankaccount account1(12345, "John Doe", 1000.0);
    account1.display();
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.display();
    return 0;
}