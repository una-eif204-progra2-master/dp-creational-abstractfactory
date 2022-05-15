//
// Created by Maikol Guzman Alan on 5/15/22.
//

#ifndef DP_CREATIONAL_ABSTRACTFACTORY_IPLAN_H
#define DP_CREATIONAL_ABSTRACTFACTORY_IPLAN_H

/**
 * The Plan interface declares the operations that all concrete plans must
 * implement.
 */
class IPlan {
public:
    virtual ~IPlan() {}
    virtual float calculateBill(int unit) const = 0;
};


#endif //DP_CREATIONAL_ABSTRACTFACTORY_IPLAN_H
