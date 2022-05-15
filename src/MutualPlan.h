//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_MUTUALPLAN_H
#define DP_CREATIONAL_ABSTRACTFACTORY_MUTUALPLAN_H


#include "IPlan.h"

/**
 * Concrete Mutual Plan are created by corresponding Concrete Factories.
 */
class MutualPlan : public IPlan{
private:
    float rate;
public:
    MutualPlan();

    float calculateBill(int unit) const override;

    float getRate() const;

    void setRate(float rate);
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_MUTUALPLAN_H
