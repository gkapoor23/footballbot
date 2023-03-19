#include "utils.h"

std::string Utils::setColor(const std::string& text, int colorCode) {
    return "\033[" + std::to_string(colorCode) + "m" + text + "\033[0m";
}
