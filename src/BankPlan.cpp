//
// Created by Maikol Guzman Alan on 5/15/22.
//

#include "BankPlan.h"

BankPlan::BankPlan() {
    this->rate = 1.50;
}

float BankPlan::getRate() const {
    return rate;
}

void BankPlan::setRate(float rate) {
    BankPlan::rate = rate;
}

float BankPlan::calculateBill(int unit) const {
    return unit * rate;
}
