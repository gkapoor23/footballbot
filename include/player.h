#pragma once

#include <string>

class Player {
public:
    Player(const std::string& name, int shooting, int passing, int dribbling, int strength);

    const std::string& getName() const;
    int getShooting() const;
    int getPassing() const;
    int getDribbling() const;
    int getStrength() const;

private:
    std::string name;
    int shooting;
    int passing;
    int dribbling;
    int strength;
};
