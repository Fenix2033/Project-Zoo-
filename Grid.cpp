//
// Created by xkudla on 19/11/2021.
//

#include "Grid.h"

Grid::Grid(){

    m_grid = std::array<std::array<int, 5>, 5>();

    for (auto &row: m_grid) {
        for (auto &column: row) {
            column = 0;
        }
    }


}

void Grid::print() const {
    for (int y = 0; y < m_grid.size(); y++) {
        for (int x = 0; x < m_grid.at(y).size(); x++) {
            std::cout << m_grid.at(x).at(y) << " ";
        }
        std::cout << std::endl;
    }
}


bool Grid::checkDirection(int x, int y) const{
    if (m_grid.at(x).at(y) == 0){
        return true;
    } else {
        std::cout << "There is already a building in the cell" << std::endl;
        return false;
    }
}

bool Grid::checkDirectionForDestroy(int x, int y) const{
    if (m_grid.at(x).at(y) != 0){
        return true;
    } else {
        std::cout << "There is no buildings" << std::endl;
        return false;
    }
}

int Grid::getTypeBuilding() const{
    std::cout << "Select building type" << std::endl;
    std::cout << "[1]" << " Bank (1) " << std::endl;
    std::cout << "[2]" << " Smeltery (2) " << std::endl;
    std::cout << "[3]" << " Sawmill (3) " << std::endl;
    std::cout << "[4] " << "Capitol (4)" << std::endl;

    int choiseBuilding;
    std::cin >> choiseBuilding;
    while(choiseBuilding > 4 or choiseBuilding < 1){
        std::cout << "Wrong choice of building" << std::endl;
        std::cin>>choiseBuilding;
    }
    if(choiseBuilding == 1){
        return 1;
    } else if(choiseBuilding == 2){
        return 2;
    } else if (choiseBuilding == 3){
        return 3;
    } else if (choiseBuilding == 4){
        return 4;
    }
}


void Grid::putTheBulding(int type, int x, int y){
    m_grid.at(x).at(y) = type;
}

void Grid::destroyBuilding(int x, int y){
    m_grid.at(x).at(y) = 0;
}

bool Grid::checkCapitol() {
    for (int y = 0; y < m_grid.size(); y++) {
        for (int x = 0; x < m_grid.at(y).size(); x++) {
            if(m_grid.at(x).at(y) == 4){
                return true;
            }
        }
    }
}
Grid::~Grid(){}