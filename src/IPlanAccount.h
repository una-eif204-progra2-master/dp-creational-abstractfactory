//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_IPLANACCOUNT_H
#define DP_CREATIONAL_ABSTRACTFACTORY_IPLANACCOUNT_H


class IPlanAccount {
public:
    virtual ~IPlanAccount() {}
    virtual float calculateInterestRate(int unit) const = 0;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_IPLANACCOUNT_H
