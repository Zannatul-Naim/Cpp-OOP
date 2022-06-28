#include <iostream>
using namespace std;

double division(double x, double y) {
  if(y == 0) throw "Divide by Zero occured!";
  else return x/y;
}

int main() 
{
    double x = 50;
    double y = 0;
    double z;
    try {
      z = division(x, y);
      cout << z << endl;
    } catch(const char* msg) {
      cerr << msg << endl;
    }
    return 0;
}
