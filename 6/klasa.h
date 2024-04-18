#include <iostream>
using namespace std;

class figura
{

    public:
    virtual void oblicz_pole() = 0;
    ~figura();

};

class kolo : public figura
{

    public:
    double r;
    kolo(double rr);
    virtual void oblicz_pole();
    ~kolo();
    
};

class walec : public kolo
{

    public:
    double h;
    walec(double rr, double hh);
    virtual void oblicz_pole();
    ~walec();
};

class kwadrat : public figura
{


    public:
    double a;
    kwadrat(double aa);
    virtual void oblicz_pole();
    ~kwadrat();
};

class szescian : public kwadrat
{

    public:
    szescian(double aa);
    virtual void oblicz_pole();
    ~szescian();
};