//
// Created by Maikol Guzman on 3/18/22.
//
#include <iostream>
#include "IFinanceEntityFactory.h"
#include "BankFactory.h"
#include "MutualFactory.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Creation pattern - Abstract BankFactory" << endl << endl;

    IFinanceEntityFactory* financeEntityFactory;
    IAccount* account;
    IPlan* plan;

    financeEntityFactory = new BankFactory;
    account = financeEntityFactory->createAccount();
    plan = financeEntityFactory->createPlan();

    cout << "BANK -----------" << endl;
    cout << "Account Rate   : " << account->calculateInterestRate(500) << endl;
    cout << "Plan Bill      : " << plan->calculateBill(500) << endl;

    financeEntityFactory = new MutualFactory;
    account = financeEntityFactory->createAccount();
    plan = financeEntityFactory->createPlan();

    cout << "MUTUAL ---------" << endl;
    cout << "Account Rate   : " << account->calculateInterestRate(500) << endl;
    cout << "Plan Bill      : " << plan->calculateBill(500) << endl;

    return 0;
}
