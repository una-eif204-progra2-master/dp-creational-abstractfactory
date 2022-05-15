//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H
#define DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H


#include "IAccountFactory.h"

class MutualFactory : public IAccountFactory  {
public:
    IBankAccount *createBankAccount(string accountType) const override;

    IPlanAccount *createPlanAccount(string accountType) const override;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H
