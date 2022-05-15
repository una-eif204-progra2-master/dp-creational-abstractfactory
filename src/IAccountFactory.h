//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_FACTORY_IACCOUNTFACTORY_H
#define DP_CREATIONAL_FACTORY_IACCOUNTFACTORY_H
#include <ostream>
#include <iostream>
#include "IBankAccount.h"
#include "IPlanAccount.h"

using namespace std;

/**
 * The Account BankFactory interface declares the factory method that is supposed to return an
 * object of a Account class. The Account's subclasses usually provide the
 * implementation of this method.
 */
class IAccountFactory {
public:
    virtual ~IAccountFactory(){};

    virtual IBankAccount *createBankAccount(string accountType) const = 0;
    virtual IPlanAccount *createPlanAccount(string accountType) const = 0;
};


#endif //DP_CREATIONAL_FACTORY_IACCOUNTFACTORY_H
