#include "string.h"
using namespace std;

class Luna{ //Se declara la clase Luna y su atributo cantidad de lunas.
    private: //Atributos
        float diametro;

    public: //Metodos
        Luna();
        Luna(float); //Constructor

        //Setters
        void setDiametro(float);

        //Getters
        float getDiametro();

};
