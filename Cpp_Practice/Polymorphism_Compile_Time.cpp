#include<iostream>
using namespace std;
class area{
    public:
    float calculate_area(int r){
        return 3.14*r;
    }
    int calculate_area(int l,int b){
        return l*b;
    }
};
int main(){
    area a;
    cout<<a.calculate_area(7)<<endl;
    cout<<a.calculate_area(7,4);
}