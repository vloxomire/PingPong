#include"Game.h"
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<iostream>

    Game::Game()
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
        //Ventana
        sf::RenderWindow ventana(sf::VideoMode(gameWidth,gameHeight),"SE ESTA PRENDIENDO, ESTA MIERDA!!!");
        ventana.setFramerateLimit(60);
        while(ventana.isOpen())
            {
                sf::Event evento;
                    while(ventana.pollEvent(evento))
                        {
                                if(evento.type==sf::Event::Closed)
                                ventana.close();
                        }
                ventana.clear(sf::Color(50,200,50));
                //ventana.draw();
                //Dibuja en ventana
                ventana.display();
            }
    };
