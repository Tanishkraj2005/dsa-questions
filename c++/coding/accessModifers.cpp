#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    student(string n,int r,int m){
    name=n;
    roll=r;
    marks=m;
    }
    void display(){
        cout<<name<<" "<<roll<<" "<<marks<<endl;
    }
    int getmarks(){
        return marks;
    }
    void setmarks(int m){
        marks=m;
    }
private:
    int marks;
};
int main(){
    student s1("Tanishk raj",2,48);
    s1.display();
    s1.setmarks(52);
    s1.display();
}