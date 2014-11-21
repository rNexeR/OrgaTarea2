#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "Cumpleanios.h"
#include <iostream>       // std::cin, std::cout
#include <list>          // std::queue
using namespace std;

void evaluar();
void escribir(string nombre_archivo, list<Cumpleanios*>cumpleanios);
list<Cumpleanios*> leer(string nombre_archivo);

#endif // EVALUADOR_H
