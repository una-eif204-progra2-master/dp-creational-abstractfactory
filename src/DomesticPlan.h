//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_DOMESTICPLAN_H
#define DP_CREATIONAL_ABSTRACTFACTORY_DOMESTICPLAN_H


#include "IPlanAccount.h"

class DomesticPlan : public IPlanAccount {
public:
    DomesticPlan();

    float calculateInterestRate(int unit) const override;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_DOMESTICPLAN_H
