#include "Ball.h"

Ball::Ball()
{
	position.x = 350;
	position.y = 200;
	radius = 20;
	color = BLUE;
	isTravelingDown = true;
	isTravelingRight = true;
	horizontalSpeed = 3;
	verticalSpeed = 2;
}

void Ball::Draw()
{
	DrawCircle((int)position.x, (int)position.y, radius, color);
}

void Ball::Move()
{
	CheckBounds();

	if (isTravelingRight)
		position.x += horizontalSpeed;
	else
		position.x -= horizontalSpeed;

	if (isTravelingDown)
		position.y += verticalSpeed;
	else
		position.y -= verticalSpeed;
}

void Ball::CheckBounds()
{
	if (position.x + radius >= GetScreenWidth())
		isTravelingRight = false;

	if (position.x - radius <= 0)
		isTravelingRight = true;

	if (position.y + radius >= GetScreenHeight())
		isTravelingDown = false;

	if (position.y - radius <= 0)
		isTravelingDown = true;
}