#include "Player.h"
unsigned Player::playerNR =0;
Player::Player(Texture *texture, int UP, int DOWN, int LEFT, int RIGHT , int SHOOT): Sprite(*texture), level(1), exp(0), expNext(100), hp(10), hpMax(10), score(0), damage(1), damageMax(2)
{
   this->texture = texture;
   this->Sprite.setTexture(*this->texture);

    this->Sprite.setScale(sf::Vector2f(0.1f, 0.1f));

   this->controls[0] = UP;
   this->controls[1] = DOWN;
    this->controls[2] = LEFT;
    this->controls[3] = RIGHT;
    this->controls[4] = SHOOT;

    Player::playerNR++;
    this->playerNR = Player::playerNR;
    std::cout << this->playerNR << std::endl;
}
Player::~Player()
{
    // Destructor implementation
}
void Player::Movement()
{
    if(Keyboard::isKeyPressed(Keyboard::Key::W))
    {
        this->Sprite.move(sf::Vector2f(0.f, -10.f));

    }
    if(Keyboard::isKeyPressed(Keyboard::Key::D))
    {
        this->Sprite.move(sf::Vector2f(10.f, 0.f));
    }
    if(Keyboard::isKeyPressed(Keyboard::Key::A))
    {
        this->Sprite.move(sf::Vector2f(-10.f, 0.f));
    }
    if(Keyboard::isKeyPressed(Keyboard::Key::S))
    {
        this->Sprite.move(sf::Vector2f(0.f, 10.f));
    }
        if(Keyboard::isKeyPressed(Keyboard::Key::Space))
    {
      
    }

}
void Player::Update()
{
  this->Movement();
}
void Player::Draw(RenderTarget &target)
{
   target.draw(this->Sprite);
}