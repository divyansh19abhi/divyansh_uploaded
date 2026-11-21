#include<iostream>
using namespace std;
class B;
class A{
    private:
    int x =49;
    public:
    friend void large(A,B);
};
class B{
    private:
    int y=69;
    public:
    friend void large(A,B);
};
void large(A obj1 ,B obj2){
    if(obj1.x>obj2.y){
        cout<<"A is greater";
    }
    else{
        cout<<"B is greater";
    }
}
int main(){
    A a;
    B b;
    large(a,b);
    return 0;
}