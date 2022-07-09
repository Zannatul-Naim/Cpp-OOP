#include<bits/stdc++.h>
using namespace std;

class RU {  // class RU is the Parent of all department class
    public:
    string name = "University of Rajshahi";
};

class CSE : public RU {  // CSE inherits characteristics of RU class
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
