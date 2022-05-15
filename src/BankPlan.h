//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_BANKPLAN_H
#define DP_CREATIONAL_ABSTRACTFACTORY_BANKPLAN_H


#include "IPlan.h"

/**
 * Concrete Bank Plan are created by corresponding Concrete Factories.
 */
class BankPlan : public IPlan{
private:
    float rate;
public:
    BankPlan();

    float getRate() const;

    void setRate(float rate);

    float calculateBill(int unit) const override;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_BANKPLAN_H
