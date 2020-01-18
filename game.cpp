#include "game.hpp"

Game::Game() : mWindow(sf::VideoMode(1024, 768), "Tetris++") {
  mWindow.setVerticalSyncEnabled(true);
}

void Game::run() {
  sf::Clock clock;
  sf::Time timeSinceLastUpdate = sf::Time::Zero;

  while (mWindow.isOpen()) {
    processEvents();
    timeSinceLastUpdate += clock.restart();
    while (timeSinceLastUpdate > timePerFrame) {
      timeSinceLastUpdate -= timePerFrame;
      processEvents();
      update(timePerFrame);
    }
    render();
  }
}

void Game::processEvents() {
  sf::Event event;
  while (mWindow.pollEvent(event)) {
    switch (event.type) {
      case sf::Event::Closed:
        mWindow.close();
        break;
      default:
        break;
    }
  }
}

void Game::update(sf::Time deltaTime) {
}

void Game::render() {
  mWindow.clear();
  mWindow.display();
}

void Game::handleInput(sf::Keyboard::Key key, bool isPressed) {
}