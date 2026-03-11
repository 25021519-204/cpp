#include<iostream>
using namespace std;

class EspressoMachine {
private:
   int waterLeval;  // ml
   int coffeeBeans; // grams
public:
EspressoMachine(int w, int cb) {
    waterLeval = w;
    coffeeBeans = cb;
}
void Brew() {
    if (waterLeval< 30 || coffeeBeans< 10) {
     cout << "Reffil needed. cannot Brew:" <<endl; 
    }
else {
    waterLeval = waterLeval - 30;
    coffeeBeans = coffeeBeans - 10;
    cout << "Brew successfull. Remaining-> water: 10ml, Beans: 5g" <<endl;
}
}
EspressoMachine operator+(EspressoMachine m) {
    EspressoMachine temp = *this;
    temp.waterLeval = temp.waterLeval + m.waterLeval;
    temp.coffeeBeans = temp.coffeeBeans + m.coffeeBeans;
    return temp;
  }

};
int main() {
   EspressoMachine m1(20,5);
   EspressoMachine m2(20,10);
   m1.Brew(); 
   EspressoMachine m3 = m1 + m2;
   m3.Brew();
}