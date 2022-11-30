#ifndef CUERPO_CELESTE //Se declara la clase padre que heredara atributos.
#define CUERPO_CELESTE
#include "string.h"
using namespace std;

class Cuerpo_Celeste{
    private: //Atributos
        int tipoMovimiento;
        int orbitaCuerpo;
        int visibles;

    public: //Metodos
        Cuerpo_Celeste();
        Cuerpo_Celeste(int, int, int);

        //Setters
        void setTipoMovimiento(int);
        void setOrbitaCuerpo(int);
        void setVisibles(int);

        //Getters
        int getTipoMovimiento();
        int getOrbitaCuerpo();
        int getVisibles();

        //Superstring
       //string imprimeDatos();
};
#endif
