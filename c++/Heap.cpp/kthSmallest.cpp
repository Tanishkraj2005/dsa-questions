#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        pq.push(a[i]);
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        if(pq.size()>k){
            pq.pop();
        }
    }
    cout<<pq.top();
}