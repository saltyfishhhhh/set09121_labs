//
//  main.cpp
//  pong1
//
//  Created by Apple on 2018/1/23.
//  Copyright © 2018年 Apple. All rights reserved.
//

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
}

