#pragma once

#include <vector>
#include "player.h"

class Team {
public:
    Team(const std::string& name);

    void addPlayer(const Player& player);
    const std::vector<Player>& getPlayers() const;

private:
    std::string name;
    std::vector<Player> players;
};
