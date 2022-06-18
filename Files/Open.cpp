#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream file;
    file.open("test.txt");
    cout << "Reading from file : " << endl;
    string data, line;
    file>>data;
    getline(file, line);
    cout << data << endl;
    cout << line << endl;
    file.close();

    return 0;
}