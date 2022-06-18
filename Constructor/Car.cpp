#include<bits/stdc++.h>
using namespace std;

class Car {
    public:
        string brandName;
        string modelName;
        int year;
        double price;

        Car(string brand, string model, int y, double p);
};

Car :: Car(string brand, string model, int y, double p) {
            brandName = brand;
            modelName = model;
            year = y;
            price = p;
        }

int main() {
    Car car1("TATA", "t5061", 2020, 990838);
    Car car2("LAMBORGINI", "la0938", 2022, 103688);

    cout << car1.brandName << " " << car1.modelName << " " << car1.year << " " << car1.price << endl;
    cout << car2.brandName << " " << car2.modelName << " " << car2.year << " " << car2.price << endl;

    return 0;
}   