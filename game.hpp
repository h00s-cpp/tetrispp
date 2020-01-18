#include <SFML/Graphics.hpp>

class Game {
public:
  Game();
  void run();

private:
  void processEvents();
  void update(sf::Time);
  void render();
  void handleInput(sf::Keyboard::Key, bool);

  sf::RenderWindow mWindow;
  const sf::Time timePerFrame = sf::seconds(1.f / 60.f);
};