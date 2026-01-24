#include<iostream>
using namespace std;
class vehicle{
    public:
    int topspeed;
    int milage;
};
class car : public vehicle{
    public:
    int seats;
};
class bike : public vehicle{
    public: 
    int gears;
};
int main(){
    bike b1;
    b1.gears=2;
    cout<<b1.gears;
}