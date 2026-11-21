#include<iostream>
using namespace std;
class rectangle{
    public:
    int length, breadth;
    rectangle(){
        length =0;
        breadth = 0;
    }
    rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    void display(){
        cout<<"length and breadth="<<length<<breadth<<endl;
    }
};
int main(){
    rectangle r1;
    rectangle r2(15 ,19);
    r1.display();
    r2.display();
    return 0;
}