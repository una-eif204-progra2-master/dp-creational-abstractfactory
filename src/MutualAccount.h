//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_MUTUALACCOUNT_H
#define DP_CREATIONAL_ABSTRACTFACTORY_MUTUALACCOUNT_H


#include "IAccount.h"

/**
 * Concrete Mutual Account are created by corresponding Concrete Factories.
 */
class MutualAccount : public IAccount {
private:
    float rate;
public:
    MutualAccount();

    float calculateInterestRate(int unit) const override;

    float getRate() const;

    void setRate(float rate);
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_MUTUALACCOUNT_H
