#ifndef STEP_H
#define STEP_H

class Step {
private:
    int id;
    double width;
    double height;
    double posX;
    double posY;
public:
    Step(int id, double width, double height, double posX, double posY);
    Step(double posX, double posY);
    int getId();
    double getWidth();
    double getHeight();
    double getPosX();
    double getPosY();
    void setPosX(double posX);
    ~Step();
};

#endif