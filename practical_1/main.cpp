# include <SFML/Graphics.hpp>

int main(){
  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!);
  sf::CircleSharp shape(100.f);
  shapr.setFillColor(sf::Color::Green);
  
   while (windows. isOpe()){
    sf::Event event:
    while (window.pollEvent(event)){
    if (event.type == sf::Event::Closed){
      window.close();
      }
     }
     window.clear();
     window.draw(shape);
     window.display();
     }
     return 0;
     }
     
