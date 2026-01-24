#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int acc_no;
    int bal;

    customer(){
        // Default Constructor
        // cout<<"Hello";
    }

    customer(string n,int a,int b){
        // Paramtized Constructor
        name=n;
        acc_no=a;
        bal=b;
    }

    customer(string n, int a){
        name=n;
        acc_no=a;
    }
    void display(){
        cout<<"Customer Detail"<<endl;
        cout<<name<<endl;
        cout<<acc_no<<endl;
        cout<<bal<<endl;
    }
};
int main(){
    customer c1("Tanishk Raj", 1234, 20);
    customer c2("Raj",41);
    c1.display();
    c2.display();
}