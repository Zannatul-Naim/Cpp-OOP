#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string id;
    int year;
    double result;
};

int main() {
    Student student1, student2;

    student1.name = "Zannatul Naim";
    student1.id = "2010776128";
    student1.year = 2020;
    student1.result = 0.01;

    cout << "Student1 name : "<< student1.name << endl;
    cout << "Student1 ID : " << student1.id << endl;
    cout << "Stdent1 Admission year : " << student1.year << endl;
    cout << "Stdent1 Result : " << student1.result << endl;

    cout << "\n";
    student2.name = "Ashraful Islam";
    student2.id = "2010876141";
    student2.year = 2020;
    student2.result = 0.01;

    cout << "Student2 name : "<< student2.name << endl;
    cout << "Student2 ID : " << student2.id << endl;
    cout << "Stdent2 Admission year : " << student2.year << endl;
    cout << "Stdent2 Result : " << student2.result << endl;

    return 0;
}