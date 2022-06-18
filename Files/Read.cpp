#include<iostream>
#include<fstream>

using namespace std;

int main() {

    string line;
    ifstream readFile("test.txt");  // 'test.txt' file will be read...

    while(getline(readFile, line)) {  // read the file while lines are available
        cout << line << endl;  // output lines
    }
    return 0;
}