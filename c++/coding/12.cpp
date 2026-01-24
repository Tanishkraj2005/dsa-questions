#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int smallest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(smallest!=a[i]){
            cout<<a[i]<<" ";
        }
    }
}