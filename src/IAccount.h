//
// Created by Maikol Guzman Alan on 5/14/22.
//

#ifndef MY_PROJECT_NAME_IACCOUNT_H
#define MY_PROJECT_NAME_IACCOUNT_H

/**
 * The Account interface declares the operations that all concrete accounts must
 * implement.
 */
class IAccount {
public:
    virtual ~IAccount() {}
    virtual float calculateInterestRate(int unit) const = 0;
};


#endif //MY_PROJECT_NAME_IACCOUNT_H
