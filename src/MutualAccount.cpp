//
// Created by Maikol Guzman Alan on 5/15/22.
//

#include "MutualAccount.h"

float MutualAccount::calculateInterestRate(int unit) const {
    return unit * rate;
}

MutualAccount::MutualAccount() {
    this->rate = 4.00;
}

float MutualAccount::getRate() const {
    return rate;
}

void MutualAccount::setRate(float rate) {
    MutualAccount::rate = rate;
}
