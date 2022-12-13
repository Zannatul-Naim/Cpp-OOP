#include<iostream>
using namespace std;

class PublicAccess {
    // public access modifier
    public:
    int x; // Data member declaration
    void display() {  // Method declaration
        cout << "Displaying from Public Class!" << endl;
    }  
}; // end of class PublicAccess

class PrivateAccess {
    // private access modifier
    private:
    int x;  // Data member declaration
    void display() {  // Method declaration
        cout << "Displaying from Private Class!" << endl;
    } 
}; // end of class PrivateAccess

class ProtectedAccess {
    // protected access modifier
    protected:
    int x; // Data member declaration
    void display() {  // Method declaration
        cout << "Displaying from Protected Class!" << endl;
    }
}; // end of class ProtectedAccess

int main() {
    PublicAccess publicAccess;
    publicAccess.display();

    PrivateAccess privateAccess;
    // privateAccess.display();  // can't access the display method

    ProtectedAccess protectedAccess;
    // protectedAccess.display();  // can't access the display method
}