#include "Cuerpo_Celeste.h"
using namespace std;

class Cometa : public Cuerpo_Celeste{ //Se declara la clase Cometa y sus atributos tama�o de la cola y velocidad del cometa.
    private: //Atributos
        float tamanoCola, velocidadCometa;

    public: //Metodos
        Cometa();
        Cometa(bool,bool,bool,float,float);

        //Setters
        void setTamanoCola(float);
        void setVelocidadCometa(float);

        //Getters
        float getTamanoCola();
        float getVelocidadCometa();

        //Superstring
        string imprimeDatos();
};
