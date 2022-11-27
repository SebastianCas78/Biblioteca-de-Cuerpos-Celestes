#include "Luna.h" //Se definen las funciones de la clase Luna.

Luna::Luna(){
    diametro=0.0;
}

Luna::Luna(float _diametro){
    diametro=_diametro;
}

void Luna::setDiametro(float _diametro){
    diametro=_diametro;
}

float Luna::getDiametro(){
    return diametro;
}
