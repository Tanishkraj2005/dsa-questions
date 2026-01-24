#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    stack<int> s;
    int val;
    cin>>val;
    stack<int> temp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.push(a[i]);
    }
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}