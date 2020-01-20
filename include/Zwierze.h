#ifndef ZWIERZE_H
#define ZWIERZE_H
#include "Czlowiek.h"
class Czlowiek;
class Zwierze
{

    public:
        Zwierze();
        virtual ~Zwierze();
        void print();
        void przypiszWlasciciela(Czlowiek *wlasciciel);

    protected:

    private:
        Czlowiek* wlasciciel;
};

#endif // ZWIERZE_H
