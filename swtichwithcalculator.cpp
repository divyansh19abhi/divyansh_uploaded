#include<iostream>
using namespace std;\
float add(float a, float b)
{
    return a+b;
}
float sub(float a, float b)
{
    return a-b;
}
float multiply(float a, float b)
{
    return a*b;
}
float divide(float a, float b)
{
    return a/b;
}
int main()
{
    float a,b;
    char op ;
    cout<<"enter two numbers :";
    cin>>a>>b;
    cout<<"choose operations (+,-,*,/) ";
    cin>>op;
    switch(op)
    {
        case'+':cout<<"result="<<add(a,b) ;
                break;
        case'-':cout<<"result="<<sub(a,b) ;
                break;
        case'*':cout<<"result="<<multiply(a,b);
                break;
        case'/':if(b!=0)
                  cout<<"result="<<divide(a,b);
                else
                  cout<<"infinite";
                break;
        default:cout<<"invalid input";                                    
    }
    return 0;    

}