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
       int k;
       float amount;
       cout<<"enter accout number :";
       cin>>k;
       if(account_number==k)
       {
        cout<<"enter amount to deposit :";
        cin>>amount;
        balance+=amount;
        cout<<"amount deposited successfully"<<endl;
       }
       else
       {
        cout<<"account number is invalid"<<endl;
       }
    }
    void withdraw()
    {
        int k;
        float amount;
        cout<<"enter account number :";
        cin>>k;
        if(account_number==k)
        {
            cout<<"enter amount to withdraw :";
            cin>>amount;
            if(amount>balance)
            {
                cout<<"insufficient balance:"<<endl;
            }
            else
            {
                balance-=amount;
                cout<<"amount withdrawn successfully"<<endl;
            }
            
        }
        else 
        {
            cout<<"account number is invalid"<<endl;
        }
    }
    void display()
    {
        cout<<"account number :"<<account_number<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"balance :"<<balance<<endl;
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