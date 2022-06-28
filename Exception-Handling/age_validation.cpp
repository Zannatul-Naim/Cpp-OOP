#include <iostream>
#include<exception>
using namespace std;

struct Age_limit : public exception {
  int age_validation(int age) {
    if(age < 18) throw "Restricted (For Teeneger's)";
    return age;
  }
};

int main() 
{
    int age;
    cin >> age;
    
    try {
      struct Age_limit check_age;
      check_age.age_validation(age);
      cout << age << endl;
    } catch(const char* msg) {
      cerr << msg << endl;
    } 
    return 0;
}
