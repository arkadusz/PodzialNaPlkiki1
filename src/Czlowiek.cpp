#include "Czlowiek.h"
#include <iostream>
#include "Zwierze.h"


using namespace std;
Czlowiek::Czlowiek()
{
    zwierze = NULL;
}

Czlowiek::~Czlowiek()
{
    //dtor
}


void Czlowiek::print(){
    cout << "CZLOWIEK::print() " << zwierze << endl;
}

void Czlowiek::przypiszZwierze(Zwierze * zwierze){
    this->zwierze = zwierze;
}
