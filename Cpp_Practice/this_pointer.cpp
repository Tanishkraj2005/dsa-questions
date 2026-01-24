#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int acc_no;
    int bal;

    customer(string name,int acc_no,int bal){
        //this pointer
        this->name=name;
        this->acc_no=acc_no;
        this->bal=bal;
    }

};
int main(){
    customer c1("Tanishk Raj", 1234, 20);
    cout<<"Customer Detail"<<endl;
    cout<<c1.name<<endl;
    cout<<c1.acc_no<<endl;
    cout<<c1.bal;
}