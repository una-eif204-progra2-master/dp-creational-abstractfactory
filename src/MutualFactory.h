//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H
#define DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H


#include "IFinanceEntityFactory.h"

/**
 * Concrete Factories produce a family of mutual that belong to a single
 * variant. The factory guarantees that resulting mutual are compatible. Note
 * that signatures of the Concrete Factory's methods return an abstract mutual,
 * while inside the method a concrete mutual is instantiated.
 */
class MutualFactory : public IFinanceEntityFactory{
public:
    IAccount *createAccount() const override;

    IPlan *createPlan() const override;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_MUTUALFACTORY_H
