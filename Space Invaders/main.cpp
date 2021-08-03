// Space Invaders.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1500, 800), "Space Invaders");
    sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));
    sf::Texture playerTexture;
    sf::Texture backgroundTexture;
    sf::Sprite background;

    backgroundTexture.loadFromFile("background.jpg");
    background.setTexture(backgroundTexture);

    player.setPosition(750.0f, 680.0f);
    playerTexture.loadFromFile("spaceship.png");
    player.setTexture(&playerTexture);

    while (window.isOpen())
    {
        sf::Event evnt;
        while (window.pollEvent(evnt))
        {
            if (evnt.type == sf::Event::Closed) {
                window.close();
            }
        }
           if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
            player.move(-0.5f, 0.0f);
        }
             if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
            player.move(0.5f, 0.0f);
        }

        window.clear();
        window.draw(background);
        window.draw(player);
        window.display();
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
