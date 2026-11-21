#include<iostream>
using namespace std;
class vehicle{
    public:
    void start(){
        cout<<"vehicle starts"<<endl;
    }
};
class car:public vehicle{
    public:
    void cardetails(){
        cout<<"this is a car"<<endl;
    }
};
class bike:public vehicle{
    public:
    void bikedetails(){
        cout<<"this is an bike"<<endl;
    }
};
int main(){
    car c;
    bike b;
    c.start();
    c.cardetails();
    b.start();
    b.bikedetails();
    return 0;
} 