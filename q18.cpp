#include<iostream>
using  namespace std;
class employee{
    private:
    int salary;
    public:
    int s;
    void setsalary(int s){
        salary = s;
    }
    int getsalary(){
        return salary ;

    }
};
int main(){
    employee e;
    e.setsalary (4500);
    cout<<"Salary="<<e.getsalary();
    return 0;
}