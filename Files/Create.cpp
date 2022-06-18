#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ofstream file("test.txt");

    file << "This line will be written on the file!";
    file.close();

    return 0;
}