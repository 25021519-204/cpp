#include<iostream>
using namespace std;

class DigitalPet {
private:
int hunger;
int energy;
public:
DigitalPet(int hunger, int energy) {
     this->hunger = hunger;
     this->energy = energy;
}
void feed() {
      hunger -= 20;
    if(hunger < 0) {
        hunger = 0;
    cout << "hunger is bounded at 0." <<endl;
    }
    }
void sleep() {
     energy += 30;
    if(energy > 100) {
        energy = 100;
    cout << "energy is bounded at 100." <<endl;
    }
}
DigitalPet operator++() {
     hunger += 10;
     energy -= 10;
    if( hunger > 100) {
       hunger = 100;
    }
    if( energy < 0) {
       energy = 0;
    }
    return *this;
} 
DigitalPet operator++(int) {
     DigitalPet temp = *this;
      hunger += 10;
      energy -= 10;
    if( hunger > 100) {
        hunger = 100;
    }
    if( energy < 0) {
        energy = 0;
    }
    return temp;
}
void printStats() {
    cout << "current Stats->hunger:" << hunger << ", energy: " << energy <<endl;
}
 
};
 int main() {
    DigitalPet pet(10,90);
    pet.feed();
    pet.sleep();
    pet.printStats(); 
    return 0;
    
 }




