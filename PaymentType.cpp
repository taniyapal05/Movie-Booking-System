#ifndef PAYMENTTYPE_CPP
#define PAYMENTTYPE_CPP
#include "UpiPayment.cpp"
#include "CardPayment.cpp"
#include "CashPayment.cpp"
using namespace std;

enum PaymentMethod { UPI, CARD, CASH };

// Open/Closed Principle -- to add NetBanking, just create NetBankingPayment.cpp
// and add one new branch here. BookingService never needs to change.
Payment* createPayment(PaymentMethod method) {
    if (method == UPI)  return new UpiPayment("customer@upi");
    if (method == CARD) return new CardPayment("**** **** **** 4242");
    return new CashPayment();
}
#endif