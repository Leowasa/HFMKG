
#include "Player.h"
#include <memory>
using namespace std;


class Game
{

    private:
            RenderWindow *window;     
            vector<Player> players;
            Texture playerTexture;
    public:
            Game(RenderWindow *window);
            virtual ~Game();
            //Accessors
            inline RenderWindow& getWindow(){return *this->window;};

            void Update();
            void Draw();


};