//
// Created by Maikol Guzman Alan on 5/15/22.
//

#include "MutualFactory.h"
#include "MutualAccount.h"
#include "MutualPlan.h"

IAccount *MutualFactory::createAccount() const {
    return new MutualAccount;
}

IPlan *MutualFactory::createPlan() const {
    return new MutualPlan;
}
