#include "Planeta.cpp" //Se declara la clase Biblioteca donde se almacenaran los objetos.
#include "Luna.cpp"
#include "Asteroide.cpp"
#include "Cometa.cpp"

class Biblioteca{
    private:
        Planeta Planeta_;
        Luna Luna_;
        Asteroide Asteroide_;
        Cometa Cometa_;

    public:
        Asteroide registrar_datos(Asteroide float);
        Cometa registrar_datos(Cometa float);
        Planeta registrar_datos(Planeta string);
        Luna registrar_datos(Luna int);

};
