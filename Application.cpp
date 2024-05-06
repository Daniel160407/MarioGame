#include <SFML/Graphics.hpp>
#include "model/Player.h"
#include <iostream>

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mario Game");

    sf::Texture playerTexture;
    playerTexture.loadFromFile("public/images/player.png");

    sf::Sprite player(playerTexture);
    player.setScale(0.2f, 0.2f);
    float playerYPos = window.getSize().y - player.getGlobalBounds().height;
    player.setPosition(0, playerYPos);

    Player playerData(1.0f, 1.0f, 0.5f);
    bool isJumping = false;
    bool falling = false;

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            player.move(playerData.getMoveSpeed(), 0);
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
            player.move(-playerData.getMoveSpeed(), 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !isJumping){
            isJumping = true;
            playerData.setJumpSpeed(-1.0f);
        }

        if(isJumping && !falling){
            player.move(0, -0.3f);
            if(player.getPosition().y <= 450){
                falling = true;
            }
        }

        if(falling){
            player.move(0, 0.3f);
            if(player.getPosition().y >= window.getSize().y - player.getGlobalBounds().height){
                falling = false;
                isJumping = false;
            }
        }


        window.clear();

        window.draw(player);

        window.display();
    }

    return 0;
}
