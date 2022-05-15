//
// Created by Maikol Guzman Alan on 5/15/22.
//

#include "BankAccount.h"

BankAccount::BankAccount() {
    this->rate = 2.50;
}

float BankAccount::getRate() const {
    return rate;
}

void BankAccount::setRate(float rate) {
    BankAccount::rate = rate;
}

float BankAccount::calculateInterestRate(int unit) const {
    return unit * rate;
}
