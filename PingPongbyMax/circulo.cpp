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
    esfera.setRadius(radio - 3);
    esfera.setOutlineThickness(m_grosor);
    esfera.setOutlineColor(m_colorContorno);
    esfera.setFillColor(m_colorRelleno);
    esfera.setOrigin(radio/2,radio/2);
}
