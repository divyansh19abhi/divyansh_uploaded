#include<iostream>
using namespace std;
bool palindrome(int n, int rev=0, int original=-1)
{
    if(original==-1)
      original=n;
    if(n==0)
      return rev== original;
      return palindrome(n/10 ,rev*10+n%10,original);  
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(palindrome(n))
      cout<<"palindrome";
    else
      cout<<"not palindrome";
    return 0;  
}