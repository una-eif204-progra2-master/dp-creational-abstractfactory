//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H
#define DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H


#include "IFinanceEntityFactory.h"

class MutualFactory : public IFinanceEntityFactory{
public:
    IAccount *createAccount() const override;

    IPlan *createPlan() const override;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H
