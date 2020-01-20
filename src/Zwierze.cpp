#include "Zwierze.h"
#include "Czlowiek.h"
#include <iostream>
using namespace std;
Zwierze::Zwierze()
{
    //ctor
}

Zwierze::~Zwierze()
{
    //dtor
}

void Zwierze::przypiszWlasciciela(Czlowiek *wlasciciel){
    this->wlasciciel = wlasciciel;
}

void Zwierze::print(){
    cout << "Zwierze::print()" <<endl;
}

