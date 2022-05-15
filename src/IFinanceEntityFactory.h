//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_FACTORY_IFINANCEENTITYFACTORY_H
#define DP_CREATIONAL_FACTORY_IFINANCEENTITYFACTORY_H
#include <ostream>
#include <iostream>
#include "IAccount.h"
#include "IPlan.h"

using namespace std;

/**
 * The Account BankFactory interface declares the factory method that is supposed to return an
 * object of a Account class. The Account's subclasses usually provide the
 * implementation of this method.
 */
class IFinanceEntityFactory {
public:
    virtual ~IFinanceEntityFactory(){};

    virtual IAccount *createAccount() const = 0;
    virtual IPlan *createPlan() const = 0;
};


#endif //DP_CREATIONAL_FACTORY_IFINANCEENTITYFACTORY_H
