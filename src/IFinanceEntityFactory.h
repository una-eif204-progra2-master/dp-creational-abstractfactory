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
 * The Abstract Factory interface declares a set of methods that return
 * different abstract objects. These objects are called a family and are
 * related by a high-level theme or concept. Objects of one family are usually
 * able to collaborate among themselves. A family of objects may have several
 * variants, but the objects of one variant are incompatible with objects of
 * another.
 */
class IFinanceEntityFactory {
public:
    virtual ~IFinanceEntityFactory(){};

    virtual IAccount *createAccount() const = 0;
    virtual IPlan *createPlan() const = 0;
};


#endif //DP_CREATIONAL_FACTORY_IFINANCEENTITYFACTORY_H
