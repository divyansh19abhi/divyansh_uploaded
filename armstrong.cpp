#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,temp,rem;
    cout<<"enter number :";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem) ;
        n=n/10;
    }
    if(temp==sum)
       cout<<"armstrong found ";
    else
       cout<<"not armstrong ";
    return 0;      
}