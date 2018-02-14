#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

const Keyboard::Key controls[4] ={
    Keyboard::A, 
    Keyboard::Z,
    Keyboard::Up,
    Keyboard::Down
};

const Vector2f paddlesSize(25.f, 100.f);
const float ballRadius = 10.f;
const int gameWidth = 800;
const int gameHeight = 600;
const float paddleSpeed = 400.f;

#//moving the ball
Vector2f ballVelocity;
bool server = false;

CircleShape ball;
RectangleShape paddles[2];


void Load(){
    for(auto &p : paddles){
        p.setSize(paddlesSize - Vector2f(3, 3));
        p.setOrigin(paddlesSize / 2.f);
	}

	ball.setRadius(ballRadius -3);
    ball.setOrigin(ballRadius /2, ballRadius / 2);

    paddles[0].setPosition(10 + paddlesSize.x / 2, gameHeight / 2);
    paddles[1].setPosition();

    ball.setPosition();
   
}


void Update(RenderWindow &window){
    //reset clock, recalculate dealttime
    static Clock clock;
    float dt = clock.restart().asSeconds();
    //check and consume events
    Event event;
    while(window.pollEvent(event)){
        if(event.type == Event::Closed) {
            window.close();
			return;
        }
    }
    //quit via ESC key
    if (Keyboard::isKeyPressed(Keyboard::Escape)){
        window.close();
    }

    //handle paddle movement
    float direction = 0.0f;
    if(Keyboard::isKeyPressed(controls[0])){
		direction--;
    }
    if(Keyboard::isKeyPressed(controls[1])){
		direction++;
    }
    paddles[0].move(0, direction * paddleSpeed * dt);
        
    
	
	





void Render(RenderWindow &window){
    //draw everthing
    window.draw(paddles[0]);
    window.draw(paddles[1]);
    window.draw(ball);
}

int main(){
    RenderWindow window(VideoMode(gameWidth,gameHeight),"PONG");
    Load();
    while (window.isOpen()){
        window.clear();
        Update(window);
        Render(window);
        window.display();
    }
    return 0;
}

