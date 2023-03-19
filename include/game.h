#pragma once

#include "team.h"

class Game {
public:
    Game(const Team& team1, const Team& team2);

    void play();

private:
    Team team1;
    Team team2;

    void displayInstructions();
    void displayGameState();
    void processUserInput();
};
