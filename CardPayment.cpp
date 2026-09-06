#ifndef CARDPAYMENT_CPP
#define CARDPAYMENT_CPP
#include <iostream>
#include <cstdlib>
#include "Payment.cpp"
using namespace std;

// Inheritance -- CardPayment extends Payment (Liskov: works through any Payment* pointer)
class CardPayment : public Payment {
private:
    string maskedCardNumber;
public:
    CardPayment(string maskedCardNumber) { this->maskedCardNumber = maskedCardNumber; }

    bool pay(double amount) override {
        cout << "Charging Rs." << amount << " to card " << maskedCardNumber << " ..." << endl;
        if (rand() % 5 == 0) {  // ~20% simulated decline for demo
            cout << "Card payment declined. Please try a different card." << endl;
            return false;
        }
        cout << "Card payment approved." << endl;
        return true;
    }

    string getMethodName() const override { return "CARD"; }
};
#endif