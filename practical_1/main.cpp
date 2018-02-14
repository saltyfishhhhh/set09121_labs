#include <SFML/Graphics.hpp>

int main(){
<<<<<<< HEAD
    sf::RenderWindow window(sf::VideoMode(200,200),"SFML works");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()){
      sf::Event event;
      while (window.pollEvent(event)){
      if (event.type == sf::Event::Closed){
=======
  sf::RenderWindow window(sf::VideoMode(200,200),"SFML works!");
    sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen()){
	  sf::Event event;
		while (window.pollEvent(event)){
		if (event.type == sf::Event::Closed){
>>>>>>> 6755ac014cbd7dab7cf1fd7e9abba624d8b5fd79
        window.close();
      }
    }
    window.clear();
    window.draw(shape);
    window.display();
  }
  return 0;
<<<<<<< HEAD

}
=======
>>>>>>> 6755ac014cbd7dab7cf1fd7e9abba624d8b5fd79

}