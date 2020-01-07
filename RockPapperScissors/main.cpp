#include <SFML/Graphics.hpp>
#include "game.h"
using namespace std;
using namespace sf;

int main()
{
    game* game1;
    game1 = new game(Vector2i(800, 600), "Rock Papper & Scissors");

    return 0;
}