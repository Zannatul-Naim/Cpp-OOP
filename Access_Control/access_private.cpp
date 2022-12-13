#include<iostream>

using namespace std;

class Computer {
    private:
        int password;  // private password value. only access using setter or getter method of this class.
    public:
        Computer(int password) {
            this->password = password;  // setting password's value using constructor.
            cout << "Password saved" << endl;
        }
        int getPassword() { // getter method for getting password varibales value with objects.
            return this->password;
        }
};

int main() {
    Computer computer(1234);  // setting password 1234 by passing to constructor.
    cout << "Password : " << computer.getPassword() << endl;  // accessing password variable using getter method
}
