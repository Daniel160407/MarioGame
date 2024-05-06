#include <SFML/Graphics.hpp>
#include <iostream>

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mario Game");

    sf::Texture playerTexture;
    playerTexture.loadFromFile("public/images/player.png");

    sf::Sprite player(playerTexture);
    player.setScale(0.2f, 0.2f);
    player.setPosition(0, 100);

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }

        window.clear();

        window.draw(player, sf::BlendAlpha);

        window.display();
    }

    return 0;
}