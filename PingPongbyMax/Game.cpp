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
        sf::Clock relog;
        while(ventana.isOpen())
            {
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
                Dibujar(ventana);

                //Dibuja en ventana
                ventana.display();
            }

            void Game::Dibujar(sf::RenderWindow &v)
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
            }
    };
