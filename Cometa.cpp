#include "Cometa.h" //Se definen las funciones de la clase Cometa.
#include <sstream>

Cometa::Cometa(){
    tamanoCola=0.0;
    velocidadCometa=0.0;
}

Cometa::Cometa(bool _tipo_Movimiento,bool _orbita_Cuerpo,bool _visibles,float _tamanoCola,float _velocidadCometa):Cuerpo_Celeste(_tipo_Movimiento,_orbita_Cuerpo,_visibles){
    tamanoCola=_tamanoCola;
    velocidadCometa=_velocidadCometa;
}

void Cometa::setTamanoCola(float _tamanoCola){
    tamanoCola=_tamanoCola;
}

void Cometa::setVelocidadCometa(float _velocidadCometa){
    velocidadCometa=_velocidadCometa;
}

float Cometa::getTamanoCola(){
    return tamanoCola;
}

float Cometa::getVelocidadCometa(){
    return velocidadCometa;
}

string Cometa::imprimeDatos(){
    stringstream aux;
    aux<<"TamañoCometa: "<<tamanoCola<<endl;
    aux<<"VelocidadCometa: "<<velocidadCometa<<endl;
    return aux.str();
}
