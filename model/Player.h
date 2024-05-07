#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
    float moveSpeed;
    float gravity;
    float jumpSpeed;
    public:
    Player(float moveSpeed, float gravity, float jumpSpeed);
    ~Player();

    float getMoveSpeed();
    float getGravity();
    float getJumpSpeed();
    void setMoveSpeed(float moveSpeed);
    void setGravity(float gravity);
    void setJumpSpeed(float jumpSpeed);
};

#endif