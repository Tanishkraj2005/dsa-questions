#include<iostream>
using namespace std;
class Car{
public:
    void fortuner(){
        cout<<"Costly";
    }
};
class bike : public Car{
    public:
    void honda(){
        cout<<"Cheap";
    }
};
class plane : public Car{
    public:
    void indigo(){
        cout<<"very cheap";
    }
};
int main(){
    plane b1;
    // b1.fortuner();
    b1.indigo();
    
}