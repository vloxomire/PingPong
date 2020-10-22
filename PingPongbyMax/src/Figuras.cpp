#include "Figuras.h"

#include<iostream>
Figuras::Figuras()
{
    std::cout<<"Construyendo figura....\n";
    m_grosor=3.f;//outlineThickness;
    sf::Color m_colorContorno(sf::Color::Cyan);//outlineColor
    sf::Color m_colorRelleno(sf::Color::Magenta);//fillColor
    const sf::Vector2f m_origen(0.f,0.f);

}

Figuras::~Figuras()
{
    std::cout<<"Destruyendo figura....\n";
}

