#include<iostream>
using namespace std;
class Person{
    string name;
    int balance,accno;
    public:
    Person(string name,int balance,int accno){
        this->name=name;
        this->balance=balance;
        this->accno=accno;
    }
    void deposit(int amount){
        if(amount>0){
        balance+=amount;
        cout<<amount<<" rs in created in account\n";
        }
        else{
            throw "Amount is zero\n";
        }
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
        }
        else if(amount<0){
            throw "the amount should be greater than zero\n";
        }
        else{
            throw "your balance is low\n";
        }
    }
};
int main(){
    Person p1("Tanishk Raj ", 5000,10);
    try{
    p1.deposit(100);
    p1.withdraw(4875412);
    p1.deposit(455);
    }
    catch(const char *e){
        cout<<"Exception occuered: "<<e<<endl;
    }
}