#include<iostream>
using namespace std;
class forreal
{
    private :
    int marks =98;
    public:
    friend void display(forreal f);
};
void display(forreal f)
{
    cout<<"Marks are : "<<f.marks<<endl;
}
int main()
{
    forreal f;
    display(f);
    return 0;
}