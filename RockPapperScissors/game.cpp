#include "game.h"
using namespace std;
using namespace sf;
game::game(Vector2i resolution,string title)
{
	fps = 60;
	window = new RenderWindow(VideoMode(resolution.x, resolution.y), title);

	window->setFramerateLimit(fps);

	gameLoop();

}
void game::draw()
{
	window->clear();

	window->display();
}

void game::gameLoop()
{
	while (window->isOpen())
	{
		draw();
	}
}