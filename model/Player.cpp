#include <SFML/Graphics.hpp>
#include "Player.h"

Player::Player(float moveSpeed, float gravity, float jumpSpeed){
    this -> moveSpeed = moveSpeed;
    this -> gravity = gravity;
    this -> jumpSpeed = jumpSpeed;
}

Player::~Player(){

}

float Player::getMoveSpeed(){
    return this->moveSpeed;
}

float Player::getGravity(){
    return this->gravity;
}

float Player::getJumpSpeed(){
    return this->jumpSpeed;
}

void Player::setMoveSpeed(float moveSpeed){
    this->moveSpeed = moveSpeed;
}

void Player::setGravity(float gravity){
    this->gravity = gravity;
}

void Player::setJumpSpeed(float jumpSpeed){
    this->jumpSpeed = jumpSpeed;
}