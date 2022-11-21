//#include "Cuerpo_Celeste.cpp" //Se declaran los objetos para cada clase.
#include "Biblioteca.h"
#include "Asteroide.cpp"
#include "Cometa.cpp"
#include "Planeta.cpp"
#include "Luna.cpp"
#include "Administrador_de_Archivo.cpp"
#include <string.h>
#include <iostream>
#include <string.h>

int main(){

Asteroide Asteroide1(5000);
Cometa Cometa1(30000000,115000);
Planeta Planeta1(CincoPuntoCincuentaYUnCentimetrosCubicos,DoceMilSetecientosCuarentaYDosKm,TrescientosSesentaYCincoDias);
Luna Luna1(2);
Biblioteca Biblioteca(Asteroide1,Cometa1,Planeta1,Luna1)
};

