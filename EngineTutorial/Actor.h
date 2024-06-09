#pragma once

class Actor
{
public:
	Actor(char symbol);
	~Actor();

	void update();

	void draw();

	char icon = '@';

	int x = 0;
	int y = 0;
};

