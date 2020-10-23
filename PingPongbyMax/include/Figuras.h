#ifndef FIGURAS_H
#define FIGURAS_H
#include<SFML/Graphics.hpp>
class Figuras
{
    public:
        Figuras();
        ~Figuras();

    protected:
        //sf::Shape m_forma;
        float m_grosor;//outlineThickness;
        sf::Color m_colorContorno;//outlineColor
        sf::Color m_colorRelleno;//fillColor
        const sf::Vector2f m_origen;
        virtual void Init();
        virtual void Draw();
        virtual void Actualizar();
    private:
};
#endif // FIGURAS_H
