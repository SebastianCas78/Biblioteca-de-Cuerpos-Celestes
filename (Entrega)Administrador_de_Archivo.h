#include "string.h"
using namespace std;

class Administrador_Archivo{ //Se declara la clase Administrador de Archivo y sus atributos para guardar la información en int, float y string.
    private: //Atributos

    public: //Metodos
        Administrador_Archivo();
        Administrador_Archivo(string);

        //Setters
        void setAdministrador_Archivo(string);

        //Getters
        void getAdministrador_Archivo();
};
