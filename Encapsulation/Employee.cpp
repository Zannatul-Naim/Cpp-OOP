#include<bits/stdc++.h>
using namespace std;

class Employee {
    private:
        int salary;  // private variable
    
    public: // setter getter as public... for accessing private varibale
        void setSalary(int s) {salary = s;}
        int getSalary() { return salary; }
};

int main() {
    Employee e1, e2;

    e1.setSalary(1221);
    e2.setSalary(121);

    cout << e1.getSalary() << endl;
    cout << e2.getSalary() << endl;

    return 0;

}