#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
#include "Game.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode({200, 200}), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    window.setFramerateLimit(30);
    Game game(&window);

    cout << "hola";
    while (window.isOpen())
    {
   
        while (const std::optional event = window.pollEvent())
        {

            if (event->is<sf::Event::Closed>())
                window.close();

          if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
{
            if (keyPressed->code == sf::Keyboard::Key::Escape)
            {
                window.close();
            }
}
        }

        game.Update();
        game.Draw();
    }
}