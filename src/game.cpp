#include "game.h"

void Game::initWindow() {
    this->window.create(sf::VideoMode(800, 600), "Summoner Wars Clone");
}

Game::Game() {
    this->initWindow();
}

Game::~Game() {}

void Game::update_SFML_events() {
    while (this->window.pollEvent(this->sfEvent)) {
        if (this->sfEvent.type == sf::Event::Closed) {
            this->window.close();
        }
    }
}

void Game::update() {
    this->update_SFML_events();
}

void Game::render() {
    this->window.clear();
    // Render ygame objects here
    this->window.display();
}

void Game::run() {
    while (this->window.isOpen()) {
        this->update();
        this->render();
    }
}
