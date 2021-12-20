#include "CFinishLine.h"

CFinishLine::CFinishLine(sf::Vector2f pos) {
	texture.loadFromFile("./assets/graphics/finish_line.jpg");
	sprite = sf::Sprite(texture);
	sprite.setPosition(pos);
}

bool CFinishLine::checkCollision(CPEOPLE& player) {
	FloatRect playerBound = player.shape.getGlobalBounds();
	playerBound.top += 80;
	playerBound.left += 20;
	playerBound.width = 30;
	playerBound.height = 30;
	return playerBound.intersects(sprite.getGlobalBounds());
}

sf::Sprite* CFinishLine::getShape() {
	return &this->sprite;
}


void CFinishLine::update() {}

int CFinishLine::getTrafficLightState() {
	return 0;
}


sf::Sprite* CFinishLine::getTrafficLightShape() {
	return nullptr;
}