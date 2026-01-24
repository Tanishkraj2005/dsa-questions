#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Display from Class A" << endl;
    }
};

class B {
public:
    void display() {
        cout << "Display from Class B" << endl;
    }
};

class C : public A, public B {
    // Ambiguity in class C
};

int main() {
    C obj;
    obj.A::display();
    obj.B::display();
 // Compiler error: Ambiguity
    return 0;
}
