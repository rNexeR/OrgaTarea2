#include "Evaluador.h"

bool compararListas(list<Cumpleanios*>l1, list<Cumpleanios*>l2)
{
    if(l1.size()!=l2.size())
        return false;

    list<Cumpleanios*>::iterator j = l2.begin();
    for(list<Cumpleanios*>::iterator i = l1.begin();
            i!=l1.end();
            i++)
    {
        if((*i)->cumpleaniero != (*j)->cumpleaniero
            || (*i)->mes != (*j)->mes
            || (*i)->dia != (*j)->dia)
            return false;
        j++;
    }
    return true;
}

void evaluar()
{
    int nota = 0;

    list<Cumpleanios*>cumpleanios;
    cumpleanios.push_back(new Cumpleanios("rufino",20,11));
    cumpleanios.push_back(new Cumpleanios("julian",10,2));
    cumpleanios.push_back(new Cumpleanios("tribilin",40,5));

    escribir("prueba_evaluador", cumpleanios);

    if(!compararListas(leer("prueba_evaluador"),cumpleanios))
    {
        cout<<"Incorrecto";
    }else
    {
        nota+=7;
        cout<<"Correcto";
    }

    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
