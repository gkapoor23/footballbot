#include "team.h"

Team::Team(const std::string& name)
    : name(name) {}

void Team::addPlayer(const Player& player) {
    players.push_back(player);
}

const std::vector<Player>& Team::getPlayers() const {
    return players;
}
