#include <iostream>
#include "Czlowiek.h"
#include "Zwierze.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Czlowiek c;
    Zwierze z;


    c.print();
    c.przypiszZwierze(&z);

    c.print();

    z.przypiszWlasciciela(&c);
    z.print();


    return 0;
}
