#include "Luna.cpp" //Se declara la clase Planeta, se manda llamar la clase Luna y sus atributos densidad, diámetro y periodo orbital

class Planeta{
    private:
        Luna lunas[2];
        string densidad;
        string diametro;
        string periodo_orbital;

    public:
        string imprimeDatos();
};
