#include<iostream>
#include<string>
using namespace std;
class student{
    public: 
    string name;
    int roll;
    float cgpa;
    student(){

    }
    student(int r,float c){
        roll=r;
        cgpa=c;
    }
    student(string n,int r,float c){
        name=n;
        roll=r;
        cgpa=c;
    }
};
int main(){
    student s(51,7.8);
    cout<<s.name<<" "<<s.roll<<" "<<s.cgpa<<endl;
    
}