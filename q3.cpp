#include<iostream>
using namespace std;
class rich{
    public:
    int balance= 20000;
};
class games{
    public:
    string gamename = "black myth wukong";
};
class device:public rich, public games{
    int gpu =5070;
    void display(){
        cout<<"PASIA = "<<balance<<endl;
        cout<<"GAMES = "<<gamename<<endl;
        cout<<"RTX = "<<gpu<<endl;
    }
};
int main(){
    device d;
    d.display();
    return 0; 
}