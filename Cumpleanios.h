#ifndef CUMPLEANIOS_H
#define CUMPLEANIOS_H

#include <iostream>
using namespace std;

class Cumpleanios
{
    public:
        string cumpleaniero;
        int mes;
        int dia;
        Cumpleanios(string cumpleaniero, int dia, int mes);
        virtual ~Cumpleanios();
    protected:
    private:
};

#endif // CUMPLEANIOS_H
