#ifndef CIRCULO_H
#define CIRCULO_H

#include <Figuras.h>


class Circulo : protected Figuras
{
    public:
        Circulo();
        virtual ~Circulo();

    protected:

    private:
        sf::CircleShape esfera;
        float radio;
        void Init();
};

#endif // CIRCULO_H
