
#include "Player.h"
using namespace std;


class Game
{

    private:
            RenderWindow *window;       
    public:
            Game(RenderWindow *window);
            virtual ~Game();
            //Accessors
            inline RenderWindow& getWindow(){return *this->window;};

            void Update();
            void Draw();


};