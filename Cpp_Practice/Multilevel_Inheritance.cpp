#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
};
class employe: public person{
    public:
    int salary;
};
class manager: public employe{
    public:
    string role;
    manager(string name,int age, int salary, string role){
        this->name=name;
        this->age=age;
        this->salary=salary;
        this->role=role;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<" "<<role;
    }
};
int main(){
    manager a("tanishk",74,200,"finanance");
    a.display();
}
