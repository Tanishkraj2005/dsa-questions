#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit=0,reverse=0,original;
    original=n;
    while(n!=0){
        digit=n%10;
        reverse=(reverse*10)+digit;
        n/=10;
    }
    if(reverse==original){
        cout<<"palindrome";
    }
    else{
        cout<<"Not a palindrome";
        }

}