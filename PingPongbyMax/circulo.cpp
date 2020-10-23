#include "circulo.h"

Circulo::Circulo()
    :radio(10.f)
{
    //ctor
}

Circulo::~Circulo()
{
    //dtor
}

void Circulo::Init()
{
    Figuras::Init();

    esfera.setRadius(radio - 3);
    esfera.setOutlineThickness(m_grosor);
    esfera.setOutlineColor(m_colorContorno);
    esfera.setFillColor(m_colorRelleno);
    esfera.setOrigin(radio/2,radio/2);
}

void Circulo::Draw(sf::RenderWindow &ventana)
{
    ventana.draw(esfera);
}

void Circulo::Actualizar()
{
    esfera.setPosition(800/2,600/2);
}
