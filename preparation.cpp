/*#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;
    void display(){
        cout<<"employee id="<<id<<endl;
        cout<<"NAME="<<name<<endl;
        cout<<"annual salary="<<salary*12<<endl;
    }
};
int main()
{
    employee e;
    e.id= 111;
    e.name =" sarthak";
    e.salary= 1000.00;
    e.display();
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class bank{
    public:
    int accountnumber;
    string name;
    float balance;
    void deposit(){
        int k;
        cout<<"enter amount to deposit";
        cin>>k;
        balance = balance + k;
        cout<<"deposit successful="<<balance<<endl;
    }
    void withdrawal(){
        int f;
        cout<<"enter amount to be withdrwal";
        cin>>f;
        if(balance >f){
            cout<<"withdrwal="<<f<<endl;
        }
        else{
            cout<<"insufficent balance"<<endl;
        }
    }    
    void display(){
            cout<<"Account number"<<accountnumber<<endl;
            cout<<"Name holder"<<name<<endl;
            cout<<"pasia"<<balance<<endl;
        }
};
int main()
{
    bank b;
    b.accountnumber = 111111;
    b.name ="uniyal";
    b.balance = 100000.00;
    b.deposit();
    b.withdrawal();
    b.display();
    return 0;
}*/
/*
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
}*/
/*
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
*/
/*
#include<iostream>
using namespace std ;
class student{
    public:
    int roll;
    string name;
    float marks;
    student (){
        roll=19;
        name="divyansh";
        marks=99.0;    
    }
    void display(){
        cout<<"Roll no="<<roll<<endl;
        cout<<"Name ="<<name<<endl;
        cout<<"Marks ="<<marks<<endl;
    }
};
int main(){
    student s;
    s.display();
    return 0;
}    
*/
/*
#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;
    employee(int i, string n, float s){
        id=i;
        name=n;
        salary=s;
    }
    void display(){
        cout<<"employee id="<<id<<endl;
        cout<<"employee name="<<name<<endl;
        cout<<"employee salary="<<salary<<endl;
    }
};
int main(){
    employee e(7017,"vibhor",10000.0) ;
    e.display();
    return 0;
}
*/
/*
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
}*/
/*
#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    student(){
        roll=0;
        name="no";
    }
    student(int r, string n){
        roll=r;
        name =n;
    }
    void display(){
        cout<<"Roll no="<<roll<<endl;
        cout<<"Name="<<name<<endl;
    }
};
int main(){
    student s1;
    student s2(1,"vikas");
    s1.display();
    s2.display();
    return 0;
}
    */
   /*
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
    */
   /*
#include<iostream>
using namespace std;
class student{
    public:
    int marks=123;
    private:
    int age=87;
    protected :
    int iq= 9 ;
    public:
    void display(){
        cout<<"Marks"<<marks<<endl;
        cout<<"Aage"<<age<<endl;
        cout<<"DImaag"<<iq<<endl;
    }
};
int main(){
    student s;
    s.display();
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class student{
    public:
    int marks=10;
    private:
    int age = 836;
    public:
    void display(){
        cout<<"MARKS"<<marks<<endl;
        cout<<"AGE"<<age<<endl;
    }
};
int main(){
    student s;
    s.display();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class person{
    protected:
    int age;
    string name;
};    
class man:public person{
    public:
    void input(){
        age=13;
        name="sneha";
    }
    void display(){
        cout<<"aghe"<<age<<endl;
        cout<<"names"<<name<<endl;
    }
};    
int main(){
    man m;
    m.input();
    m.display();
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class student{
    private:
    int marks=93;
    public:
    friend void display(student s);
};
void display(student s){
    cout<<"marks  "<<s.marks;
}
int main(){
    student s;
    display(s);
    return 0;
}*/
/*
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
}*/
/*
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
}*/
/*
#include<iostream>
using namespace std;
class person{
    public:
    string name ="aashu joshila";
    void displayname(){
        cout<<"Men name= "<<name<<endl;
    }
};
class student:public person{
    public:
    int roll= 23;
    void display(){
        cout<<"ROLL no = "<<roll<<endl;
    }
};
int main(){
    student s;
    s.displayname();
    s.display();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class person{
    public:
    string name="yashu";
};
class men:public person{
    public:
    int age =27;
};
class pension:public men{
    public:
    int salary = 500;
    void display(){
        cout<<"NAME= "<<name<<endl;
        cout<<"UMAr = "<<age<<endl;
        cout<<"PASia = "<<salary<<endl;
    }
};
int main(){
    pension p;
    p.display();
    return 0;
} 
*/
/*
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
    int gpu ="5070";
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
} */
/*
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
*/
#include<iostream>
using namespace std;
class person{
    public:
    string name = "tomar";
};
class student:virtual public person{
    public:
    int roll =101;
};
class employee:virtual public person{
    public:
    int id=501;
};
class teachingassistant:public student, public employee{
    public:
    void display(){
        cout<<"NAAM "<<name<<endl;
        cout<<"Roll no"<<roll<<endl;
        cout<<"EMPLOYEE UID"<<id<<endl;
    }
};
int main(){
    teachingassistant t;
    t.display();
    return 0;
}         