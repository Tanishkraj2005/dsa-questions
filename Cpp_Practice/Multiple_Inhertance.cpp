#include<iostream>
using namespace std;
class human{
    public: 
    string name;
    void nam(){
        cout<<"My name is "<<name;
    }
};
class youtuber{
    public:
    int subscriber;
    void fun(){
        cout<<"My subscriber is "<<subscriber;
    }
};
class teacher{
    public:
    float salary;
    void sal(){
        cout<<"My salary is "<<salary;
    }
};
class person: public human, public youtuber, public teacher{
    public:
    int age;
    person(string n,int s,float sa,int a){
        name=n;
        subscriber=s;
        salary=sa;
        age=a;
    }
    void display(){
        cout<<name<<" "<<salary<<" "<<salary<<" "<<age;
    }
};
int main(){
    person p("tanihk",45,450,21);
    p.display();

}