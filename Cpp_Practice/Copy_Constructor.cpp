#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int acc_no;
    int bal;

    customer(string n,int a,int b){
        // Paramtized Constructor
        name=n;
        acc_no=a;
        bal=b;
    }


    void display(){
        cout<<"Customer Detail"<<endl;
        cout<<name<<endl;
        cout<<acc_no<<endl;
        cout<<bal<<endl;
    }
    customer(customer &b){
        name=b.name;
        acc_no=b.acc_no;
        bal=b.bal;
    }
};
int main(){
    customer c1("Tanishk Raj", 1234, 20);
    customer c2(c1);
    c2.display();
}