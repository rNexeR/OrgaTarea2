// queue::push/pop
#include "Evaluador.h"
#include <iostream>
#include <list>
#include <fstream>
using namespace std;

//Escribe los datos del objeto mascota dado en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varias mascotas en un solo archivo
void escribir(string nombre_archivo, list<Cumpleanios*>cumpleanios)
{
    ofstream out(nombre_archivo.c_str(), ios::app);
    out.seekp(0, ios::end);
    for(list<Cumpleanios*>::iterator i = cumpleanios.begin(); i!=cumpleanios.end(); i++){
        out.write((*i)->cumpleaniero.c_str(), 10);
        out.write((char*)&(*i)->mes, 4);
        out.write((char*)&(*i)->dia, 4);
    }
    out.close();
}

//Devuelve una mascota previamente escrita (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varias mascotas de un solo archivo
list<Cumpleanios*> leer(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    char* n = new char[10];
    int mes, dia;
    string nombre;
    in.seekg(0, ios::end);
    int final = in.tellg();
    in.seekg(0, ios::beg);
    list<Cumpleanios*>cumpleanios;

    for(int x = 0; x<final/18; x++){
        in.read(n, 10);
        in.read((char*)&mes,4);
        in.read((char*)&dia,4);
        nombre = n;
        cumpleanios.push_back(new Cumpleanios(nombre, dia, mes));
    }
    in.close();
    return cumpleanios;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
