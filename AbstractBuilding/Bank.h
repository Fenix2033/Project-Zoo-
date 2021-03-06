//
// Created by xkochnev on 15.01.2022.
//

#ifndef PROJECT_ZOO_BANK_H
#define PROJECT_ZOO_BANK_H
#include "AbstractBuilding.h"


class Bank: public AbstractBuilding{
public:
    int getType() override;
    std::array<int, 3> getPrice() override;
    int getProfit() override;
};


#endif //PROJECT_ZOO_BANK_H
