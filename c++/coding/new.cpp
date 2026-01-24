// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n+1];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int pos;
//     cin>>pos;
//     for(int i=pos;i<n-1;i++){
//         a[i]=a[i+1];
//     }
//     for(int i=0;i<n-1;i++){
//         cout<<a[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;
inline int sum(int x,int y){
    return x+y;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<sum(x,y);
    }