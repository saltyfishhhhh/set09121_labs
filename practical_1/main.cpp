#include <SFML/Graphics.hpp>

int main(){
  sf::RenderWindow window(sf::VideMode(200,200),"SFML works");
    sf::Circleshape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen(){
    sf::Event event:
    while (window.pollEvent(event)){
      if (event.Type == sf::Event::Closed){
        window.close();
      }
    }
    window.clear();
    window.draw(shape);
    window.disaplay();
  }
  returen 0;

}

