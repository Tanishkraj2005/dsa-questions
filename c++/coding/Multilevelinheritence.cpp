#include<iostream>
using namespace std;
class cricketer{
public:
    int runs;
    int matches;
};
class engineer{
public: 
    int roll;
    string domain;
};
class boy : public cricketer,public engineer{
public:
    string name;
};
int main(){
    boy b1;
    b1.domain="data science";
    cout<<b1.domain;
}