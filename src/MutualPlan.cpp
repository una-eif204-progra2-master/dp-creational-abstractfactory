//
// Created by Maikol Guzman Alan on 5/15/22.
//

#include "MutualPlan.h"

float MutualPlan::calculateBill(int unit) const {
    return unit * rate;
}

MutualPlan::MutualPlan() {
    this->rate = 1.20;
}

float MutualPlan::getRate() const {
    return rate;
}

void MutualPlan::setRate(float rate) {
    MutualPlan::rate = rate;
}