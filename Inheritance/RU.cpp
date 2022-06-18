#include<bits/stdc++.h>
using namespace std;

class RU {
    public:
    string name = "University of Rajshahi";
};

class CSE : public RU {
    public: 
        string department = "Department of CSE";
};

int main() {
    RU ru;
    cout << ru.name << endl;
    CSE cse;
    cout << cse.department << "\t" << cse.name << endl;
    
    return 0;
}