#include "Planeta.h" //Se definen las funciones de la clase Planeta.
#include <string.h>


Planeta::Planeta(){
    numero_lunas=0;
    densidad=0.0;
    diametro=0.0;
    periodo_orbital=0;
}

Planeta::Planeta(int _tipo_Movimiento,int _orbita_Cuerpo,int _visibles,int _numero_lunas,float _densidad, float _diametro, int _perido_orbital):Cuerpo_Celeste(_tipo_Movimiento,_orbita_Cuerpo,_visibles){
    numero_lunas=_numero_lunas;
    densidad=_densidad;
    diametro=_diametro;
    periodo_orbital=_perido_orbital;
};
void Planeta::setNumeroLunas(int _numero_Lunas){
    numero_lunas=_numero_Lunas;
}

void Planeta::setDensidad(float _densidad){
    densidad=_densidad;
}

void Planeta::setDiametro(float _diametro){
    diametro=_diametro;
}

void Planeta::setPeriodoOrbital(int _periodo_orbital){
    periodo_orbital=_periodo_orbital;
}

int Planeta::getNumeroLunas(){
    return numero_lunas;
}

float Planeta::getDensidad(){
    return densidad;
}

float Planeta::getDiametro(){
    return diametro;
}

int Planeta::getPeriodoOrbital(){
    return periodo_orbital;
}

void Planeta::agregarLuna(Luna luna,int numero_luna){
    lunas[numero_luna]=luna;
}


string Planeta::imprimeDatos(){
    stringstream aux;
    aux<<"NumeroLunas: "<<numero_lunas<<endl;
    aux<<"Densidad: "<<densidad<<endl;
    aux<<"Diametro: "<<diametro<<endl;
    aux<<"PeriodoOrbital: "<<periodo_orbital<<endl;
    return aux.str();
}
