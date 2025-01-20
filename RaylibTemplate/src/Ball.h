#pragma once
#include "raylib.h"

class Ball {
private:
	Vector2 position;
	float radius;
	float horizontalSpeed;
	float verticalSpeed;
	bool isTravelingRight;
	bool isTravelingDown;
	Color color;
public:
	Ball();
	void Draw();
	void Move();
private:
	void CheckBounds();
};