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
        balance =b;
    }
    void deposit()
    {
        float amount;
        cout<<"Enter amount to deposit :";
        cin>>amount;
        if(account_number==0)
        {
            cout<<"Account number is invalid"<<endl;
        }
        else
        {
            balance+=amount;
            cout<<"Amount deposited successfully"<<endl;
        }
    }
    void withdraw()
    {
        float amount;
        cout<<"Enter amount to withdraw :";
        cin>>amount;
        if(account_number==0)
        {
            cout<<"Account number is invalid"<<endl;
        }
        else if(amount>balance)
        {
            cout<<"Insufficient balance"<<endl;
        }
        else
        {
            balance-=amount;
            cout<<"Amount withdrawn successfully"<<endl;
        }
    }
    void display()
    {
        cout<<"Account Number :"<<account_number<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Balance :"<<balance<<endl;
    }    
};
int main()
{
    bankaccount b1(10238,"divyansh",1920.0);
    b1.display();
    b1.deposit();
    b1.display();
    b1.withdraw();
    b1.display();
    return 0;
}