#include<iostream>
using namespace std;

class ABC { // ABC is the name of the class
public: // access specifier. default private...
    int x; // variable in class
    void display() { // class method
        cout << "This method will display this text by creating it's objects" << endl;
    }

}; // end of class

int main() {
    // Creating the objects of ABC class
    ABC abc; // abc is now a object of ABC class 
    abc.display(); // calling the class method by using objects
    cout << "finished ..." << endl;
    return 0;
}