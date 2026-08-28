#include<iostream>
using namespace std;
class cal{
    public:
    void add()
    {
         int a, b;
    cout<<"enter two number ";
    cin>>a>>b;
    cout<<"result="<<a+b<<endl;
    }
    void multiply()
    {
        int a,b;
        cout<<"enter two number:" ;
        cin>>a>>b;
        cout<<"result="<<a*b<<endl;
    }
};
int main()
{
    cal obj;
    obj.add();
    obj.multiply();
    return 0;
}