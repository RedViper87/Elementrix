#include "Game.h"
#include <iostream>

Game::Game() : isRunning(true), player(std::make_unique<Player>()) {
    std::cout << "Game Initialized!" << std::endl;
}

Game::~Game() {
    std::cout << "Game Shutting Down!" << std::endl;
}

void Game::run() {
    while (isRunning) {
        processInput();
        update();
        render();
    }
}

void Game::processInput() {
    // Placeholder for input processing
    // For now, we'll just check for a quit condition
    // In a real game, you'd handle keyboards/mouse input here
    // Example: if player presses 'q', set isRunning to false
}

void Game::update() {
    // Placeholder for game state updates
    // Update player position, game physics, etc.
    player->update();
}

void Game::render() {
    // Placeholder for rendering
    // In a real game, you'd draw graphics here
    std::cout << "Rendering Frame..." << std::endl;
}
