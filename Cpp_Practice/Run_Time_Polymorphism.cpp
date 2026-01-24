#include<iostream>
using namespace std;
class animal{
    public:
    virtual void speak(){
        cout<<"Huhu";
    }
};
class dog: public animal{
    public:
    void speak(){
        cout<<"Bark";
    }
};
int main(){
    animal*p;
    p=new dog();
    p->speak();  
}