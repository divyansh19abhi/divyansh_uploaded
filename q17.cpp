#include<iostream>
using namespace std;
class calculate{
    public:
    void area(float r){
        float k= 3.14;
        cout<<"circle area="<<k*r*r<<endl;
    }
    void area(double l, double b ){
        cout<<"rectangle area="<<l*b<<endl;
    }
    void area(int s){
        cout<<"square ="<<s*s<<endl;
    }
};
int main(){
    calculate c;
    c.area(4.0f);
    c.area(3,5);
    c.area(5);
    return 0;
}