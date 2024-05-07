#include <SFML/Graphics.hpp>
#include <vector>
#include "../model/Step.h"

namespace move {
    std::vector<Step> moveObjects(std::vector<Step> steps, float moveSpeed, bool forward){
        for(int i=0; i<steps.size(); i++){
            if(forward){
                steps[i].setPosX(steps[i].getPosX() - moveSpeed);
            } else {
                steps[i].setPosX(steps[i].getPosX() + moveSpeed);
            }
        }

        return steps;
    }
}