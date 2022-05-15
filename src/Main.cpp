//
// Created by Maikol Guzman on 3/18/22.
//
#include <iostream>
#include "IAccountFactory.h"
#include "BankFactory.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Creation pattern - Abstract BankFactory" << endl << endl;

    IAccountFactory* accountFactory = new BankFactory();
    IBankAccount* bankBusinessAccount;
    IBankAccount* bankPersonalAccount;

    bankBusinessAccount = accountFactory->createBankAccount("BUSINESS");
    bankPersonalAccount = accountFactory->createBankAccount("PERSONAL");

    cout << "Business Rate: " << bankBusinessAccount->calculateInterestRate(500) << endl;
    cout << "Personal Rate: " << bankPersonalAccount->calculateInterestRate(500) << endl;

    return 0;
}
