#include "Game.h"

Game::Game(RenderWindow *window)
{
    this->window = window;
     this->window->setFramerateLimit(30);

      if(!playerTexture.loadFromFile("C:\\Users\\leonf\\Desktop\\Proyecto_mamalon\\build\\Textures\\Poliigon_ConcreteWorn_8690_Preview1.png"))
    {
        std::cout << "Error loading player texture" << std::endl;
    }
    else
    {
       this-> players.push_back(Player(&this->playerTexture, 22, 18, 0, 3, 57));
    }
}
Game::~Game()
{
    
}
void Game::Update()
{
    for (Player& player : players)
    {
        player.Update();
    }
}

void Game::Draw()
{
    this->window->clear();
    for (Player& player : players)
    {
        player.Draw(*this->window);
    }
    this->window->display();
}
