#include<iostream>
using namespace std;
class Cricket{
    public:
    string name;
    int age;
    float avg;
void print(){
    cout<<name<<" "<<age<<" "<<avg<<" "<<endl;
}
    int match(){
        return age/avg;
    }
};
int main(){
    Cricket c1;
    cout<<"Name: ";
    getline(cin,c1.name);
    cout<<"Age: ";
    cin>>c1.age;
    cout<<"Avg: ";
    cin>>c1.avg;
    c1.print();
    cout<<c1.match();


}