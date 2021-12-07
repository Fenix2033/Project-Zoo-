//
// Created by xkudla on 14/11/2021.
//

#include "Game.h"
#include "Grid.h"
#include "Position.h"
#include <iostream>

Game::Game() {
    m_grid = new Grid();
}

void Game::printIntroduction() const {
    std::cout << "Game started." << std::endl;
}

void Game::printOptions() const {
    std::cout << "[0] "<< "Put the bulding" << std::endl;
    std::cout << "[9] "<< "Exit game" << std::endl;
    std::cout << "Input number for action: " << std::endl;
}

int Game::waitForInput() const {
    int input;
    std::cin >> input;
    return input;
}

void Game::printEnd() const {
    std::cout << "Game ended" << std::endl;
}

void Game::start() {
    printIntroduction();

    while (true) {
        m_grid->print();
        printOptions();
        int input = waitForInput();
        processInput(input);
    }
}

void Game::processInput(int input) {
    if (input == '9') {
        printEnd();
        exit(0);
    } else if (input == 0) {
        m_grid->putTheBulding();
    } else if (input == 1) {
        std::cout << "0" << std::endl;
    } else if (input == 2) {
        std::cout << "0" << std::endl;
    } else if (input == 3) {
        std::cout << "0" << std::endl;
    } else {
        std::cout << "Unsupported option!" << std::endl;
    }
}

//Position Game::choicePosition(){
//    if (m_grid->checkDirection(x, y)) {
//        m_grid->putTheBuilding(x, y);
//    } else {
//        std::cout << "You cannot put a building off the grid" << std::endl;
//    }
//}
