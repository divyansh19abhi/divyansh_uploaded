#include<iostream>
using namespace std;
class bankaccount
{
    private:
    int account_number;
    string name;
    float balance;
    public:
    bankaccount(int n, string h, float b)
    {
        account_number = n;
        name = h;
        balance = b;
    }
    void deposit()
{
    int n;
    float amount;

    cout << "Enter account number: ";
    cin >> n;

    if (account_number != n)
    {
        cout << "Wrong details" << endl;
        return;
    }

    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount" << endl;
        return;
    }

    balance += amount;
    cout << "Amount deposited successfully" << endl;
}

void withdraw()
{
    int n;
    float amount;

    cout << "Enter account number: ";
    cin >> n;

    if (account_number != n)
    {
        cout << "Wrong details" << endl;
        return;
    }

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount" << endl;
    }
    else if (amount > balance)
    {
        cout << "Insufficient balance" << endl;
    }
    else
    {
        balance -= amount;
        cout << "Amount withdrawn successfully" << endl;
    }
}
    void display()
    {
        cout << "Account Number: " << account_number << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    bankaccount b1(987654321,"divyansh",50000.0);
    b1.deposit();
    b1.display();
    b1.withdraw();
    b1.display();
    return 0;
}