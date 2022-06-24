#include<bits/stdc++.h>
using namespace std;

class Method {
    public:
    void RandomValue() {
        srand(time(0));
        cout << "Random integer between (1-10): " << (rand()%10 +1) << endl;
    }
    // returns a random value
    int getRandomValue() {
        srand(time(0));
        return (rand()%100 +1);
    }

    void display(); // Method declaration inside the Class

    int speed(int maxSpeed);

};
 // accessing method from outside the class
int Method :: speed(int maxSpeed) {
    if(maxSpeed > 200) maxSpeed = 200;
    return maxSpeed;
}


int main() {
    Method method;  // Creating a objects

    method.RandomValue();

    cout << "Random value between (1-100): " << method.getRandomValue() << endl;
    method.display();

    cout << "Speed : " << method.speed(210) << endl;  // calling speed method from the Method class

    return 0;
}

void Method :: display() {
    cout << "Displaying from outside the class..." << endl;
}
