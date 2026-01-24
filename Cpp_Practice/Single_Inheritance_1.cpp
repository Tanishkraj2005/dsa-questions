#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
};
class student: public person{
    public:
    int roll_number;
    student(string n,int a,int r){
        name=n;
        age=a;
        roll_number=r;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll_number;
    }
};
int main(){
    string name;
    int age,roll_number;
    cin>>name;
    cin>>age;
    cin>>roll_number;
    student a(name,age,roll_number);
    a.display();
    
}