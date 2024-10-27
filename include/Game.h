#pragma once

#include <memory>
#include "Player.h"

class Game {
public:
    Game();
    ~Game();

    void run();

private:
    void processInput();
    void update();
    void render();

    bool isRunning;

    std::unique_ptr<Player> player;
    // Add other game components as needed
};