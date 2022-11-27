#include "Asteroide.h" //Se definen las funciones de la clase Asteroide.
#include<sstream>

Asteroide::Asteroide(){
    diametro=0;
}

Asteroide::Asteroide(bool _tipo_Movimiento,bool _orbita_Cuerpo,bool _visibles,int _diametro):Cuerpo_Celeste(_tipo_Movimiento,_orbita_Cuerpo,_visibles){
    diametro=_diametro;
}

void Asteroide::setDiametro(int _diametro){
    diametro=_diametro;
}

int Asteroide::getDiametro(){
    return diametro;
}
