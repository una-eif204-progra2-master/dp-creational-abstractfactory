//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_BANKACCOUNT_H
#define DP_CREATIONAL_ABSTRACTFACTORY_BANKACCOUNT_H

#include "IAccount.h"

/**
 * Concrete Bank Account are created by corresponding Concrete Factories.
 */
class BankAccount : public IAccount{
private:
    float rate;
public:
    BankAccount();

    float getRate() const;

    void setRate(float rate);

    float calculateInterestRate(int unit) const override;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_BANKACCOUNT_H
