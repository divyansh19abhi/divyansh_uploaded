#include<iostream>
using namespace std;
class rectangle{
    public:
    int length, breadth ;
    rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    void area(){
        cout<<"area of rectangle= "<<length*breadth<<endl;
    }
};
int main(){
    rectangle r(3,9);
    r.area();
    return 0;
}