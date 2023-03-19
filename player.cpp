#include "player.h"

Player::Player(const std::string& name, int shooting, int passing, int dribbling, int strength)
    : name(name), shooting(shooting), passing(passing), dribbling(dribbling), strength(strength) {}

const std::string& Player::getName() const {
    return name;
}

int Player::getShooting() const {
    return shooting;
}

int Player::getPassing() const {
    return passing;
}

int Player::getDribbling() const {
    return dribbling;
}

int Player::getStrength() const {
    return strength;
}
