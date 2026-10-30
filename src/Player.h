#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"
#include <iostream>
using namespace sf;

class Player
{
    private:
    Texture *texture;
    Sprite Sprite;
    RectangleShape hitbox;

    int level;
    int exp;
    int expNext;

    int hp;
    int hpMax;

    int score;

    int damage;
    int damageMax;  

    public:
        Player(Texture *texture);
        virtual ~Player();

        void Update();
        void Movement();
        void Draw();


};