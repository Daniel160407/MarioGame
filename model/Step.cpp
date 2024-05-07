#include "Step.h"

Step::Step(int id, double width, double height, double posX, double posY){
    this -> id = id;
    this -> width = width;
    this -> height = height;
    this -> posX = posX;
    this -> posY = posY;
}

Step::Step(double posX, double posY){
    this -> posX = posX;
    this -> posY = posY;
}

int Step::getId() { return id; }
double Step::getWidth() { return width; }
double Step::getHeight() { return height; }
double Step::getPosX() { return posX; }
double Step::getPosY() { return posY; }
void Step::setPosX(double posX) {
    this -> posX = posX;
}

Step::~Step() {}