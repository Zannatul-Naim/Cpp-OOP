#include<bits/stdc++.h>

using namespace std;

class Main {
    public:
        void main() {
            cout << "In main Class..." << endl;
        }
};

class AnotherMain {
    public:
        void anotherMain() {
            cout << "In First class..." << endl;
        }
};

class ChildMain : public Main, public AnotherMain {
    public:
        void chlid() {
            cout << "In child class..." << endl;
        }
};

int main() {

    ChildMain child;

    child.chlid();
    child.anotherMain();
    child.main();

    return 0;
}