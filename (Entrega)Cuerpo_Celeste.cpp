#include "Cuerpo_Celeste.h"
#include <sstream>
#include "string.h"

Cuerpo_Celeste::Cuerpo_Celeste(){
    tipoMovimiento=true;
    orbitaCuerpo=true;
    visibles=true;
}

Cuerpo_Celeste::Cuerpo_Celeste(bool _tipo_Movimiento, bool _orbita_Cuerpo, bool _visibles){
    tipoMovimiento=_tipo_Movimiento;
    orbitaCuerpo=_orbita_Cuerpo;
    visibles=_visibles;
}

void Cuerpo_Celeste::setTipoMovimiento(bool _tipo_Movimiento){
    tipoMovimiento=_tipo_Movimiento;
}

void Cuerpo_Celeste::setOrbitaCuerpo(bool _orbita_Cuerpo){
    orbitaCuerpo=_orbita_Cuerpo;
}

void Cuerpo_Celeste::setVisibles(bool _visibles){
    visibles=_visibles;
}

bool Cuerpo_Celeste::getTipoMovimiento(){
    return tipoMovimiento;
}

bool Cuerpo_Celeste::getOrbitaCuerpo(){
    return orbitaCuerpo;
}

bool Cuerpo_Celeste::getVisibles(){
    return visibles;
}

//string Cuerpo_Celeste::imprimeDatos(){
    //stringstream aux;
    //aux<<"TipoMovimiento: "<<tipo_movimiento<<endl;
    //aux<<"OrbitaCuerpo: "<<orbita_cuerpo<<endl;
    //aux<<"Visibles: "<<visibles<<endl;
    //return aux.str();
//}
