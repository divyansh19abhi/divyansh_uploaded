#include<iostream>
using namespace std;
class game
{
    protected:
    int score;
    public:
    void setscore(int s)
    {
        score=s;
    }
    void display()
    {
        cout<<"score: "<<score<<endl;
    }
};
int main()
{
    game g;
    g.setscore(100);
    g.display();
    return 0;
}