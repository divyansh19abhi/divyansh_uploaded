#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,temp,rem;
    cout<<"enter number :";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
       cout<<"palindrome number found :";
    else
       cout<<"not a palindrome :";
    return 0;      
}

