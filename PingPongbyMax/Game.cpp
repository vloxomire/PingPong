#include"Game.h"
#include<SFML/Window.hpp>
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
        sf::Window ventana(sf::VideoMode(600,600),"SE ESTA PRENDIENDO, ESTA MIERDA!!!");
        while(ventana.isOpen())
            {
                sf::Event evento;
                    while(ventana.pollEvent(evento))
                        {
                                if(evento.type==sf::Event::Closed)
                                ventana.close();
                        }

            }
    };
