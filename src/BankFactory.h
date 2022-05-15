//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_FACTORY_FACTORY_H
#define DP_CREATIONAL_FACTORY_FACTORY_H
#include "IFinanceEntityFactory.h"

/**
 * Concrete BankFactory override the factory method in order to change the
 * resulting account's type.
 */
class BankFactory : public IFinanceEntityFactory {
public:
    IAccount *createAccount() const override;

    IPlan *createPlan() const override;
};


#endif //DP_CREATIONAL_FACTORY_FACTORY_H
