#include "Game.h"

Game::Game(RenderWindow *window)
{
    this->window = window;
     this->window->setFramerateLimit(30);
}

Game::~Game()
{
    delete window;
}

void Game::Update()
{
    while (const std::optional event = window->pollEvent())
    {
        if (event->is<sf::Event::Closed>())
            window->close();
    }
}

void Game::Draw()
{
    window->clear();
    // Add drawing code here
    window->display();
}
