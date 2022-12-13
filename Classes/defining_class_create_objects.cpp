#include<iostream>
using namespace std;

class ClassName {
    // Access specifier:
    public:
    // Data members;
    int data;
    // Member functions
    void function() {

    }
}; // end of the class

// sample class
class Student {
    public:
    string name;
    int rollNo;
    void display() {
        cout << "displaying from the student class." << endl;
    }
}A, B; // A, B are the objects of student class

int main() {

    Student C;
    Student D;

    A.display();  // calling display function for object A
    B.display();  // calling display function for object B
    C.display();  // calling display function for object C
    D.display();  // calling display function for object D

    return 0;
}