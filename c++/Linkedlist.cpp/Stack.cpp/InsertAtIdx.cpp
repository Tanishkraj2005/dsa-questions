#include<iostream>
#include<stack>
using namespace std;
int main(){
    cout<<"Enter the number of array: ";
    int n;
    cin>>n;
    int a[n];
    stack<int> s;
    cout<<endl;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.push(a[i]);
    }
    cout<<endl;
    cout<<"Enter the postion: ";
    int idx;
    cin>>idx;
    cout<<endl;
    cout<<"Enter the value to insert: ";
    int val;
    cin>>val;
    cout<<endl;
    stack<int> temp;
    for(int i=0;i<n-idx;i++){
        temp.push(s.top());
        s.pop();
    }
    
    s.push(val);

    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    cout<<"New array: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}