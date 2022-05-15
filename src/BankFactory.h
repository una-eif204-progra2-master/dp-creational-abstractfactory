//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_FACTORY_FACTORY_H
#define DP_CREATIONAL_FACTORY_FACTORY_H
#include "IFinanceEntityFactory.h"

/**
 * Concrete Factories produce a family of banks that belong to a single
 * variant. The factory guarantees that resulting banks are compatible. Note
 * that signatures of the Concrete Factory's methods return an abstract mutual,
 * while inside the method a concrete bank is instantiated.
 */
class BankFactory : public IFinanceEntityFactory {
public:
    IAccount *createAccount() const override;

    IPlan *createPlan() const override;
};


#endif //DP_CREATIONAL_FACTORY_FACTORY_H
