#include "Planeta.h" //Se definen las funciones de la clase Planeta.
#include <string.h>

//Luna Planeta::imprimeDatos(){
    //return cuenta_con_luna(s)[]
//}

Planeta Planeta(string densidad_, string diametro_, string perido_orbital_){
    densidad=densidad_;
    diametro=diametro_;
    periodo_orbital=perido_orbital_;
};
void Planeta::agregaLuna(Luna luna,int posicion){
    lunas[posicion]=luna;
}
