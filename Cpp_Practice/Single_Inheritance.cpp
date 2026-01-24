#include<iostream>
using namespace std;
class human{
    public:
    string name;
    int age, phone_no;
    float weight;
};

class teacher : public human{
    public:
    int salary, work_hour;

    teacher(string name, int age, int phone_no,float weight, int salary, int work_hour){
        this->name=name;
        this->age=age;
        this->phone_no=phone_no;
        this->weight=weight;
        this->salary=salary;
        this->work_hour=work_hour;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<phone_no<<" ";
    }
};
int main(){
    teacher a("tanishk",45,648,55.2,66,854);
    a.display();
}