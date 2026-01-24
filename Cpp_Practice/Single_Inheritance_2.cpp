#include<iostream>
using namespace std;
class shape{
    public:
    void display(){
        cout<<"This is a shape\n";
    }
};
class circle: public shape{
    public:
    float area(int r){
        return 3.14*r*r;
    }
};
int main(){
    circle a;
    a.display();
    cout<<a.area(4);
}