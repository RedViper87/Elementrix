#pragma once

class Player {
public:
    Player();
    ~Player();

    void update();
    void render();

private:
    float x, y; // Player position
    float velocityX, velocityY; // Player velocity
};