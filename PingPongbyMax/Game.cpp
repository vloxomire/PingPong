#include"Game.h"
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<iostream>

Game::Game()
    :estaJugando(false)
{
    std::cout<<"Construyendo...\n";
    Init();
};

Game::~Game()
{
    std::cout<<"Destruyendo...\n";
};

void Game::Init()
{

};

void Game::Play()
{
    sf::CircleShape ball;
    ball.setRadius(10 - 3);
    ball.setOutlineThickness(3);
    ball.setOutlineColor(sf::Color::Black);
    ball.setFillColor(sf::Color::White);
    ball.setOrigin(10 / 2, 10 / 2);

    //Ventana
    sf::RenderWindow ventana(sf::VideoMode(gameWidth,gameHeight),"SE ESTA PRENDIENDO, ESTA MIERDA!!!");
    ventana.setFramerateLimit(60);
    sf::Clock relog;
    while(ventana.isOpen())
    {
        estaJugando=true;
        //Manejadora de eventos
        sf::Event evento;
        while(ventana.pollEvent(evento))
        {
            //ventana cerrar o presionar esc: salir
            if((evento.type==sf::Event::Closed) || ((evento.type==sf::Event::KeyPressed)&&(evento.key.code==sf::Keyboard::Escape)))
            {
                ventana.close();
                break;
            }
        }
        //Limpiar ventana
        ventana.clear(sf::Color(50,200,50));
        //Dibujar(ventana);
        if(estaJugando)
        {
            c.Draw(ventana);
            c.Actualizar();
            ventana.draw(ball);
            //v.draw();
        }
        else
        {
            //v.draw();
        }
        //Dibuja en ventana
        ventana.display();
    }

    /*void Game::Dibujar(const sf::RenderWindow &ventana)
        {
            if(estaJugando)
                {
                        //v.draw();
                        //v.draw();
                        //v.draw();
                }
            else
                {
                    //v.draw();
                }
        }*/
};
