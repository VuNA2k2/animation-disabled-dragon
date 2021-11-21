#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(640,480),"Dragon");
    sf::Texture texture;
    texture.loadFromFile("test.png");
    sf::IntRect intRect(0,0,106,106);
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setTextureRect(intRect);
    sf::Clock clock;
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if(event.type == sf::Event::Closed)window.close();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
            intRect.top = 0;
            if(clock.getElapsedTime().asSeconds() >= 0.20f){
                if(intRect.left == 212){
                    intRect.left = 0;
                }
                else intRect.left += 106;
                sprite.setTextureRect(intRect);
                sprite.move(0,10);
                if(sprite.getPosition().y >= 480)sprite.setPosition(0,0);
                clock.restart();
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
            intRect.top = 106*3;
            if(clock.getElapsedTime().asSeconds() >= 0.20f){
                if(intRect.left == 212){
                    intRect.left = 0;
                }
                else intRect.left += 106;
                sprite.setTextureRect(intRect);
                sprite.move(0,-10);
                if(sprite.getPosition().y >= 480)sprite.setPosition(0,0);
                clock.restart();
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            intRect.top = 106*2;
            if(clock.getElapsedTime().asSeconds() >= 0.20f){
                if(intRect.left == 212){
                    intRect.left = 0;
                }
                else intRect.left += 106;
                sprite.setTextureRect(intRect);
                sprite.move(10,0);
                if(sprite.getPosition().y >= 480)sprite.setPosition(0,0);
                clock.restart();
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
            intRect.top = 106;
            if(clock.getElapsedTime().asSeconds() >= 0.20f){
                if(intRect.left == 212){
                    intRect.left = 0;
                }
                else intRect.left += 106;
                sprite.setTextureRect(intRect);
                sprite.move(-10,0);
                if(sprite.getPosition().y >= 480)sprite.setPosition(0,0);
                clock.restart();
            }
        }
        window.clear();
        window.draw(sprite);
        window.display();
    }
}



