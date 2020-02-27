#pragma once

#include "Framework/GameObject.h"
#include "Bullet.h"

class Player : public GameObject
{
private:
	Bullet bullet;
	Bullet bullet1;
	Bullet bullet2;

public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);
	Bullet* getBullet() {
		return &bullet;
	};
	Bullet* getBullet1() {
		return &bullet1;
	};
	Bullet* getBullet2() {
		return &bullet2;
	};

};