#include<iostream>
using namespace std;

class TransitCard {
 private:
    double balance;
    bool isActiveTrip;
 public:
TransitCard(double balanceValue) {
    balance = balanceValue; 
    isActiveTrip = false;
}
 void tapIn() {
    if( isActiveTrip == true){
        cout << "error: Already on an active trip" << endl;
    }
    else if( balance < 2.50 ) {
        cout << "error: insufficient balance" << endl;
    }
    else {
        isActiveTrip = true;
        cout << "Tap-in successfull" << endl;
    }
}
void tapOut() {
    if( isActiveTrip == false) {
        cout << "error: cannot tap out , no active trip" << endl;
    }
    else {
        balance = balance-2.50;
        isActiveTrip = false;
        cout << "Tap out successful. Remaining balance: $2.50" << endl;
    }
}
    void operator-=(double penalty)
    {
        balance -= penalty;
    }
    bool operator!() {
        return balance == 0;
    }
};

int main() {
    TransitCard card(5.0);

    card.tapIn();
    card.tapIn();
    card.tapOut();
    card.tapOut();
   if (!card) {
    cout << "Empty!" << endl;
   } 
   return 0;
}






