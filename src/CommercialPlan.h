//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_COMMERCIALPLAN_H
#define DP_CREATIONAL_ABSTRACTFACTORY_COMMERCIALPLAN_H


#include "IPlanAccount.h"

class CommercialPlan : public IPlanAccount {
public:
    CommercialPlan();

    float calculateInterestRate(int unit) const override;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_COMMERCIALPLAN_H
