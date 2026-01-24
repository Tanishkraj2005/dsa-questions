#include<iostream>
using namespace std;
class vehicle{
    public:
    int topspeed;
    int milage;
};
class twowheeler : public vehicle{
    public: 

};
class fourwheeler : public vehicle{
    public:
};
class car : public fourwheeler{
    public:
    int seats;
};
class bike : public twowheeler{
    public: 
    int gears;
};
int main(){
    bike b1;
    b1.gears=2;
    cout<<b1.gears;
}