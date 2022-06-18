#include<bits/stdc++.h>
using namespace std;

class GrandFather {
    public:
        void grandFather() {
            cout << "Grand Father accessing GrandFather" << endl;
        }

        void f_father() {
            cout << "Father Accessing GrandFather" << endl;
        }
        void c_child() {
            cout << "Child Accessing GrandFather" << endl;
        }
};

class Father : public GrandFather {
    public:
        void father() {
            cout << "Father accessing Father" << endl;
        }
        void f_child() {
            cout << "Child accessing Father" << endl;
        }
};

class Child : public Father {
    public:
        void child() {
            cout << "Child accessing Child" << endl;
        }
};

int main() {
    GrandFather grandfather;
    grandfather.grandFather();

    Father father;
    father.father();
    father.f_father();

    Child child;
    child.child();
    child.f_child();
    child.c_child();

    return 0;
}

