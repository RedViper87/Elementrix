#include "Player.h"
#include <iostream>

Player::Player() : x(0.0f), y(0.0f), velocityX(0.0f), velocityY(0.0f) {
    std::cout << "Player Created!" << std::endl;
}

Player::~Player() {
    std::cout << "Player Destroyed!" << std::endl;
}

void Player::update() {
    // Placeholder for player update logic
    // For example, apply gravity, handle movement, etc.
    x += velocityX;
    y += velocityY;
    std::cout << "Player Position: (" << x << ", " << y << ")" << std::endl;
}

void Player::render() {
    // Placeholder for player rendering logic
    // In a real game, you'd draw the player sprite here
    std::cout << "Rendering Player at (" << x << ", " << y << ")" << std::endl;
}
