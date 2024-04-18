#include "klasa.h"

    void pole(figura *wsk)
    {
        wsk -> oblicz_pole();
    }

    int main()
    {
        kolo k(1);
        walec w(1, 2);

        kwadrat kw(4);
        szescian sz(4);

        figura *wsk;

        wsk = &k;
        pole(wsk);

        wsk = &w;
        pole(wsk);

        wsk = &kw;
        pole(wsk);

        wsk = &sz;
        pole(wsk);

    }

