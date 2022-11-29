#include "Luna.cpp" //Se declara la clase Planeta, se manda llamar la clase Luna y sus atributos densidad, diámetro y periodo orbital
#include "string.h"
#include "Cuerpo_Celeste.h"
using namespace std;

class Planeta : public Cuerpo_Celeste{
    private: //Atributos
        Luna lunas[2];
        int numero_lunas;
        float densidad, diametro;
        int periodo_orbital;

    public: //Metodos
        Planeta();
        Planeta(bool, bool, bool,int, float, float, int);

        //Setters
        void setNumeroLunas(int);
        void setDensidad(float);
        void setDiametro(float);
        void setPeriodoOrbital(int);

        //Getters
        int getNumeroLunas();
        float getDensidad();
        float getDiametro();
        int getPeriodoOrbital();

        //Relación de agregación con Luna
        void agregarLuna(Luna, int);
        string cantidadLunas();

        //Superstring
        string imprimeDatos();
};
