#include<bits/stdc++.h>
using namespace std;

class Animal {  // main class
    public:
        void animalSound() {
            cout << "All animal makes sound...!" << endl;
        } 
};

class Cat : public Animal {  // first sub-class
    public:
        void animalSound() {
            cout << "Cat sounds meaw meaw! " << endl;
        }
};

class Dog : public Animal {  // Second sub-class
    public:
        void animalSound() {
            cout << "Dog sounds bow bow" << endl;
        }
};

int main() {
    Animal animal;
    animal.animalSound();
    Dog dog;
    dog.animalSound();
    Cat cat;
    cat.animalSound();

    return 0;
}
