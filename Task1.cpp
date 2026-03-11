#include<iostream>
using namespace std;

class Elevator {
private:
int currentFloor;
double currentWeight;
const double maxWeight;

public:
Elevator ( int f = 1, int w = 0):
maxWeight(500.0) 
{
   currentFloor = f;
   currentWeight = w;
   }
  
Elevator & loadPassenger(double weight)
{
if (currentWeight + weight > maxWeight )
{
    cout << "error: weight exceeds 500.0kg. Passenger rejected." << endl;
}
else {
    currentWeight = currentWeight + weight;
}
return *this;
}
Elevator & goToFloor(int floor)
{
 int totalFloors;
if (floor < 0 || floor > 10)
{
cout << "error: floor "<<floor<<" is out of bounds" << endl;
}
else {
    currentFloor = floor;
}
return *this;
}
~Elevator() {
        cout << "Elevator powering down at floor " << currentFloor << endl;
    }
void display() {
cout << "currentfloor:" << currentFloor <<endl;
cout << "currentweight:" << currentWeight <<endl;
}
};
int main() 
{
    Elevator e1;
    e1. loadPassenger(400);
    e1. loadPassenger(150);
    e1. goToFloor(12);
    e1. goToFloor(5);
    return 0;
}


 