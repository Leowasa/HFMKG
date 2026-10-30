#include "Player.h"

Player::Player(Texture *texture): Sprite(*texture), level(1), exp(0), expNext(100), hp(10), hpMax(10), score(0), damage(1), damageMax(2)
{
   this->texture = texture;
   this->Sprite.setTexture(*this->texture);
}
Player::~Player()
{
    // Destructor implementation
}
void Player::Movement()
{
    // Movement implementation
}
void Player::Update()
{
    // Update implementation
}
void Player::Draw()
{
    // Draw implementation
}