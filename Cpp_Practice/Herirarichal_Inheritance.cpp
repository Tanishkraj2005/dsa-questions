#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "I can eat." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark. Woof! Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "I can meow. Meow!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    cout << "Dog:" << endl;
    dog.eat();
    dog.bark(); // Specific to Dog

}
