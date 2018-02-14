#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

const Keyboard::key controls[4] ={
    Keyboard::A, 
    Keyboard::Z,
    Keyboard::Up,
    Keyboard::down
};

const Vector2f paddlesSize(25.f, 100.f);
const float ballRadius = 10.f;
const int gameWidth = 800;
const int gameHeight = 600;
comst float paddleSpeed = 400.f;

#//moving the ball
Vector2f ballVelocity;
bool server = false;

CirclesShapes nall;
RectangleShape paddles[2];


void Load(){
    for(auto &p : paddles){
        p.setSize(paddlesSize - Vector2f(3, 3));
        p.setOrigin(paddlesSize / 2.f);

    }

    ball.setRadius(ballRadius -3);
    ball.setOrigin(ballRadius /2, ballRadius / 2);

    paddles[0].setPositoin(10 + paddlesSize.x / 2, gameHeight / 2);
    paddles[1].setPositoin(...);

    ball.setPositoin(...);
    ballVelocity = {(server ? 100.0f : -100.0f),60.0f};
}


void Update(RenderWindow &window){
    //reset clock, recalculate dealttime
    static Clock clock;
    float dt = clock.restart().asSeconds();
    //check and consume events
    Event event;
    while(window.pollEvent(event)){
        if(event.type == Event::Colosed){
            windows.close();
            return:
        }
    }
    //quit via ESC key
    if(keyboard::isKeyPressed(Keyboard::Escape)){
        windows.close();
    }
    //handle paddle movement
    float direction = 0,0f;
    if(keyboard::isKeyPressed(controls[0])){
        direction--:
    }
    if(keyboard::isKeyPressed(controls[1])){
        direction++:
    }
    paddles[0].move(0, direction * paddleSpeed * dt);
        
    ball.move(ballVelocity * dt);
    //check ball collision
    const float bx = ball.getPosition().x;
    const float by = ball.getPosition().y;
    if(by > gameHeight){
        //bottom wall
        ballVelocity.x *= 1.1f;
        ballVelocity.y *= -1.1f;
        ball.move(0,-10);
    }else if (by <0){
        //top wall
        ballVelocity.x *= 1.1f;
        ballVelocity.y *= -1.1f;
        ball.move(0,10);
    }else if (bx > gameWidth){
        //right wall
        reset();
    }else if (bx < 0){
        //left wall
        reset():
    }else if (
        //ball is inline or behind paddle
              bx < paddlesSize.x &&
              //and ball is below top edge of padd;e
              by  > paddles[0].getPosition().y  - (paddlesSize.y * 0.5)&&
              //and ball is above bottom edge of paddle
              by < paddles[0].getPosition().y + (paddlesSize.y * 0.5)
              ){
                //bounce off left paddle
    }else if (...){
        //bounce off tight paddle
    }
    
    }




void Render(RenderWindow &window){
    //draw everthing
    window.draw(paddles[0]);
    window.draw(paddles[1]);
    window.draw(ball);
}

int main(){
    RenderWindow window(VideoMode(gameWidth,gameHeight),"PONG");
    Load();
    while (window.isOPen()){
        wiindow.clear();
        Update(window);
        Render(window);
        window.display();
    }
    return 0;
}

