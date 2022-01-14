//
// Created by xkochnev on 09.12.2021.
//

#ifndef PROJECT_ZOO_PLAYER_H
#define PROJECT_ZOO_PLAYER_H
#include "Building.h"
#include <iostream>
#include <array>

class Player {
    std::array<int, 3> m_resources;
    std::array<int, 3> m_profit;
public:
    Player();

    void printInfoAboutPlayer();
    std::array<int, 3> getResources();
    void setResources(int count, int index);
    void setProfit(int profit, char type);
    void addResourceTurn();
    void market(int input);
    bool checkResources(char buildingType);
    ~Player();
};


#endif //PROJECT_ZOO_PLAYER_H
