#include "game.h"
#include "utils.h"
#include <iostream>
#include <string>

Game::Game(const Team& team1, const Team& team2)
    : team1(team1), team2(team2) {}

void Game::play() {
    while (true) {
        displayInstructions();
        displayGameState();
        processUserInput();
    }
}

void Game::displayInstructions() {
    std::cout << "----------------------------------------\n";
    std::cout << "Instructions:\n";
    std::cout << "1. Pass\n";
    std::cout << "2. Shoot\n";
    std::cout << "3. Quit game\n";
    std::cout << "----------------------------------------\n";
}

void Game::displayGameState() {
    // Display team names, player names, and their stats
    // Display the current score and time remaining
}

void Game::processUserInput() {
    std::string input;
    std::cin >> input;

    if (input == "1") {
        // Pass logic
    } else if (input == "2") {
        // Shoot logic
    } else if (input == "3") {
        std::cout << "Exiting game...\n";
        exit(0);
    } else {
        std::cout << "Invalid input! Please enter a valid option.\n";
    }
}
