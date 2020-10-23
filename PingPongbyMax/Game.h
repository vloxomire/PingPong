#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include<SFML/graphics.hpp>
#include"Circulo.h"
class Game
{
public:
    Game();
    ~Game();
    void Play();
private:
    unsigned int gameWidth{800};
    unsigned int gameHeight{600};
    void Init();
    //void Dibujar(sf::RenderWindow);
    bool estaJugando;
    sf::Shape * formasVector[]={new Circulo(),new Paddle(),new Paddle()};

};
#endif
