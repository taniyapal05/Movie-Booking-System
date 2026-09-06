#ifndef CASHPAYMENT_CPP
#define CASHPAYMENT_CPP
#include <iostream>
#include "Payment.cpp"
using namespace std;

// Inheritance -- CashPayment extends Payment. Cash never fails once collected.
class CashPayment : public Payment {
public:
    bool pay(double amount) override {
        cout << "Collecting cash of Rs." << amount << " ..." << endl;
        cout << "Cash received. Payment successful." << endl;
        return true;
    }

    string getMethodName() const override { return "CASH"; }
};
#endif