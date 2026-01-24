#include<iostream>
#include<stack>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int a[n];
    stack<int> s;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.push(a[i]);
    }

    int idx;
    cin >> idx;

    stack<int> temp;

    for (int i = 0; i < n; i++) {
        if (i == idx) {
            s.pop(); 
        } else {
            temp.push(s.top()); 
            s.pop(); 
        }
    }

    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
