#ifndef CZLOWIEK_H
#define CZLOWIEK_H
#include "Zwierze.h"
class Zwierze;
class Czlowiek
{
    public:
        Czlowiek();
        virtual ~Czlowiek();
        void print();
        void przypiszZwierze(Zwierze * zwierze);

    protected:

    private:
        Zwierze* zwierze;
};

#endif // CZLOWIEK_H
