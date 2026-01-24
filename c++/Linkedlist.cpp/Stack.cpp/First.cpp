#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st ,rev;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    while(st.size()>0){
        cout<<st.top()<<" ";
        rev.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(rev.size()>0){
        cout<<rev.top()<<" ";
        rev.pop();
    }
    
}


#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st, rev, gt, rt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // print(st);
    while(st.size()>0){
        // cout<<st.top()<<" ";
        gt.push(st.top());
        st.pop();
    }
    cout<<gt.top()<<endl;
    
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        rev.push(st.top());
        st.pop();
    }
}