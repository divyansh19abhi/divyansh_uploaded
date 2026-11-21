#include<iostream>
using namespace std;
class bank{
    public:
    int accountnumber;
    string name;
    float balance;
    void deposit(){
        int k;
        cout<<"enter amount to deposit";
        cin>>k;
        balance = balance + k;
        cout<<"deposit successful="<<balance<<endl;
    }
    void withdrawal(){
        int f;
        cout<<"enter amount to be withdrwal";
        cin>>f;
        if(balance >f){
            cout<<"withdrwal="<<f<<endl;
        }
        else{
            cout<<"insufficent balance"<<endl;
        }
    }    
    void display(){
            cout<<"Account number"<<accountnumber<<endl;
            cout<<"Name holder"<<name<<endl;
            cout<<"pasia"<<balance<<endl;
        }
};
int main()
{
    bank b;
    b.accountnumber = 111111;
    b.name ="uniyal";
    b.balance = 100000.00;
    b.deposit();
    b.withdrawal();
    b.display();
    return 0;
}