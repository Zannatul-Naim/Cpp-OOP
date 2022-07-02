#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream file;
    file.open("test.txt");  // opening test.txt file for read
    cout << "Reading from file : " << endl;
    string data, line;   
    file>>data;  // a string written into data from file
    getline(file, line);  // a string line written into line from file
    cout << data << endl;
    cout << line << endl;
    file.close();

    return 0;
}
