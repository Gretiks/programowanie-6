#include "klasa.h"

kolo::kolo(double rr)
{
    r = rr;
}

void kolo::oblicz_pole()
{
    cout << "Pole kola: " << 3.14 * r * r << '\n';
}

walec::walec(double rr, double hh):kolo(rr)
{
    h = hh;
}

void walec::oblicz_pole()
{
    cout << "Pole walca: " << (3.14 * r * r * 2) + (2 *3.14 * r * h) << '\n';
}

kwadrat::kwadrat(double aa)
{
    a = aa;
}

void kwadrat::oblicz_pole()
{
    cout << "Pole kwadratu: " << a*a << '\n';
}

szescian::szescian(double aa):kwadrat(aa)
{
}

void szescian::oblicz_pole()
{
    cout << "Pole szescianu: " << 6*a*a << "\n\n";
}


figura::~figura()
{
    cout << "Destruktor wirtualny\n";
}

kolo::~kolo()
{
    cout << "Destruktor kolo\n";
}
kwadrat::~kwadrat()
{
    cout << "Destruktor kwadrat\n";
}
walec::~walec()
{
    cout << "Destruktor walec\n";
}
szescian::~szescian()
{
    cout << "Destruktor szescian\n";
}