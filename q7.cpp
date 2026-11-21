#include<iostream>
using namespace std;
class B;
class A{
    private:
    int x =35;
    public:
    friend void add(A,B);
};
class B{
    private :
    int y=15;
    public:
    friend void add(A,B);
};
void add(A obj1, B obj2){
    cout<<"sum = "<<obj1.x +obj2 .y<<endl;
}
int main(){
    A a;
    B b;
    add(a,b);
    return 0;
}