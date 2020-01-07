#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;
using namespace std;

class game
{
public: 
	game(Vector2i resolution, string title);
	void draw();
	void gameLoop();

private: 
	int fps;
	RenderWindow * window;
};