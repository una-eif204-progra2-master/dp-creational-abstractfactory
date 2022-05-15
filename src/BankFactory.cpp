//
// Created by Maikol Guzman Alan on 5/15/22.
//

#include "BankFactory.h"
#include "BankAccount.h"
#include "BankPlan.h"

IAccount *BankFactory::createAccount() const {
    return new BankAccount;
}

IPlan *BankFactory::createPlan() const {
    return new BankPlan;
}