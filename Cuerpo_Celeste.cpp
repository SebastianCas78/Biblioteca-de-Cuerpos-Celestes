#include "Cuerpo_Celeste.h" //Se declaran las unidades de los atributos de la clase padre.
#include <sstream>
#include "string.h"

Cuerpo_Celeste::Cuerpo_Celeste(){
    tipoMovimiento=0;
    orbitaCuerpo=0;
    visibles=0;
}

Cuerpo_Celeste::Cuerpo_Celeste(int _tipo_Movimiento, int _orbita_Cuerpo, int _visibles){
    tipoMovimiento=_tipo_Movimiento;
    orbitaCuerpo=_orbita_Cuerpo;
    visibles=_visibles;
}

void Cuerpo_Celeste::setTipoMovimiento(int _tipo_Movimiento){
    tipoMovimiento=_tipo_Movimiento;
}

void Cuerpo_Celeste::setOrbitaCuerpo(int _orbita_Cuerpo){
    orbitaCuerpo=_orbita_Cuerpo;
}

void Cuerpo_Celeste::setVisibles(int _visibles){
    visibles=_visibles;
}

int Cuerpo_Celeste::getTipoMovimiento(){
    return tipoMovimiento;
}

int Cuerpo_Celeste::getOrbitaCuerpo(){
    return orbitaCuerpo;
}

int Cuerpo_Celeste::getVisibles(){
    return visibles;
}
