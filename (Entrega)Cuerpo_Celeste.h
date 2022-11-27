#ifndef CUERPO_CELESTE
#define CUERPO_CELESTE
#include "string.h"
using namespace std;

class Cuerpo_Celeste{
    private: //Atributos
        bool tipoMovimiento;
        bool orbitaCuerpo;
        bool visibles;

    public: //Metodos
        Cuerpo_Celeste();
        Cuerpo_Celeste(bool, bool, bool);

        //Setters
        void setTipoMovimiento(bool);
        void setOrbitaCuerpo(bool);
        void setVisibles(bool);

        //Getters
        bool getTipoMovimiento();
        bool getOrbitaCuerpo();
        bool getVisibles();

        //Superstring
       //string imprimeDatos();
};
#endif
