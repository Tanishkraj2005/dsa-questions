// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int min=500;
        int min_id=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                min_id=j;
            }
        }
        int temp=0;
        temp=arr[i];
        arr[i]=arr[min_id];
        arr[min_id]=temp;
        cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
}