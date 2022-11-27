#include "string.h"
#include "Cuerpo_Celeste.h"
using namespace std;

class Asteroide : public Cuerpo_Celeste{//public Cuerpo_Celeste.h{ //Se declara la clase asteroide y su atributo diámetro.
    private: //Atributos
        int diametro;

    public: //Metodos
        Asteroide();
        Asteroide(bool,bool,bool,int);//Constructor

        //Setters
        void setDiametro(int);

        //Getters
        int getDiametro();
};
