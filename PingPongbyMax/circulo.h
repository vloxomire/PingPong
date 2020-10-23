#ifndef CIRCULO_H
#define CIRCULO_H

#include <Figuras.h>


class Circulo : protected Figuras
{
    public:
        Circulo();
        virtual ~Circulo();
        void Draw(sf::RenderWindow &ventana);
        void Actualizar();
        sf::CircleShape esfera;

    protected:

    private:
        void Init();


        float radio;
};

#endif // CIRCULO_H
