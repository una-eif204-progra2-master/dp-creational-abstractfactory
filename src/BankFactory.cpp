//
// Created by Maikol Guzman Alan on 5/15/22.
//

#include "BankFactory.h"
#include "PersonalAccount.h"
#include "BusinessAccount.h"
#include "DomesticPlan.h"
#include "CommercialPlan.h"

IBankAccount *BankFactory::createBankAccount(string accountType) const {
    if(accountType == "BUSINESS") {
        return new BusinessAccount;
    }
    else if(accountType == "PERSONAL") {
        return new PersonalAccount;
    }

    return nullptr;
}

IPlanAccount *BankFactory::createPlanAccount(string accountType) const {
    if(accountType == "COMMERCIAL") {
        return new CommercialPlan;
    }
    else if(accountType == "DOMESTIC") {
        return new DomesticPlan;
    }

    return nullptr;
}
