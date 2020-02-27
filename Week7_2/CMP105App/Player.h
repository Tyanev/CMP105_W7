#pragma once

#include "Framework/GameObject.h"
#include "Bullet.h"

class Player : public GameObject
{
private:
		Bullet bullet;
public:
	Player();
	~Player();

	void handleInput(float dt);
	Bullet* getBullet() {
		return &bullet;
	};
};