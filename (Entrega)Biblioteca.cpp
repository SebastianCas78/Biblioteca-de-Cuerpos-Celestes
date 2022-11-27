#include "Cuerpo_Celeste.cpp" //Se declaran los objetos para cada clase.
#include "Asteroide.cpp"
#include "Cometa.cpp"
#include "Planeta.cpp"
#include "Administrador_de_Archivo.cpp"
#include <string.h>
#include <iostream>
#include <istream>
#include <cmath>
#include <string.h>
using namespace std;

int main(){
    bool TipoMovimiento;
    bool OrbitaCuerpo;
    bool Visible;
    Cuerpo_Celeste Cuerpo_Celeste1(true,true, true);
    Asteroide Asteroide1(true,true, true,5000);
    Cometa Cometa1(true,true, true,30000000,115000);
    Planeta Planeta1(true,true, true,2,5.5,12742,365);
    Luna Luna1(3474.8);
    Luna Luna2(3121.6);

    int op;

    while (true){
    cout<<"Bienvenido a la Biblioteca de Cuerpos Celestes, ¿De qué Cuerpo Celeste quieres introducir información?."<<endl;

    int el;

    cout<<"Antes de empezar responde las siguientes preguntas (true/false):"<<endl;
    cout<<"1)Pregunta #1.\n2)Pregunta #2.\n3)Pregunta #3.\n4)Continuar.";cin>>el;
    if(el==1){
            cout<<"¿El Cuerpo Celeste tiene algún tipo de Movimiento?:";
            cin>>TipoMovimiento;
            cout<<"Es: "<<TipoMovimiento<<endl;
    }
    else if(el==2){
            cout<<"¿El Cuerpo Celeste orbita algún otro Cuerpo?";
            cin>>OrbitaCuerpo;
            cout<<"Es: "<<OrbitaCuerpo<<endl;
    }
    else if(el==3){
            cout<<"¿El Cuerpo Celeste es visible a simple vista desde la Tierra?";
            cin>>Visible;
            cout<<"Es: "<<Visible<<endl;
            cout<<"El cuerpo Celeste cuenta con algún tipo de movimiento "<<TipoMovimiento<<" también orbita algun cuerpo "<<OrbitaCuerpo<<" y es visible desde el planeta "<<Visible<<endl;
    }
    else if(el==4){
            cout<<"1)Asteroide.\n2)Cometa.\n3)Planeta.\n4)Luna.\n5)Salir.";cin>>op;
            if(op==1){
                int op2;
                cout<<"1)Ingresar datos. \n2) Usar datos predefinidos. \n3)Salir.";cin>>op2;
                if(op2==1){
                        cout<<Asteroide1.getDiametro()<<endl;
                }
                else if(op2==2){
                        int setDiametro;
                        cout<<"Introduce el diametro del asteroide:";cin>>setDiametro;
                cout<<Asteroide1.getDiametro()<<endl;
                }
                else if(op2==3){
                        break;
                }
        }
        else if (op==2){
                int op3;
                cout<<"1)Ingresar datos. \n2) Usar datos predefinidos. \n3)Salir.";cin>>op3;
                if(op3==1){
                        cout<<Cometa1.getTamanoCola()<<endl;
                        cout<<Cometa1.getVelocidadCometa()<<endl;
                }
                else if(op3==2){
                        int setTamanoCola;
                        int setVelocidadCometa;
                        cout<<"Introduce el tamaño de la cola del Cometa:";cin>>setTamanoCola;
                        cout<<Cometa1.getTamanoCola()<<endl;
                        cout<<"Introduce la velocidad del Cometa:";cin>>setVelocidadCometa;
                        cout<<Cometa1.getVelocidadCometa()<<endl;
                }
                else if(op3==3){
                        break;
                }
        }
        else if (op==3){
                int op4;
                cout<<"1)Ingresar datos. \n2) Usar datos predefinidos. \n3)Salir.";cin>>op4;
                if(op4==1){
                        cout<<Planeta1.getNumeroLunas()<<endl;
                        cout<<Planeta1.getDensidad()<<endl;
                        cout<<Planeta1.getDiametro()<<endl;
                        cout<<Planeta1.getPeriodoOrbital()<<endl;
                }
                else if(op4==2){
                        int setNumeroLunas;
                        int setDensidad;
                        int setDiametro;
                        int setPeriodoOrbital;
                    cout<<"Introduce el número de lunas que tiene el planeta:";cin>>setNumeroLunas;
                    cout<<Planeta1.getNumeroLunas()<<endl;
                    cout<<"Introduce la densidad del Planeta:";cin>>setDensidad;
                    cout<<Planeta1.getDensidad()<<endl;
                    cout<<"Introduce el diámetro del Planeta:";cin>>setDiametro;
                    cout<<Planeta1.getDiametro()<<endl;
                    cout<<"Introduce el periodo orbital del Planeta:";cin>>setPeriodoOrbital;
                    cout<<Planeta1.getPeriodoOrbital()<<endl;
                }
                else if(op4==3){
                        break;
                }
        }
        else if (op==4){
                int op5;
                cout<<"1)Ingresar datos. \n2) Usar datos predefinidos. \n3)Salir.";cin>>op5;
                if(op5==1){
                        cout<<Luna1.getDiametro()<<endl;
                        cout<<Luna2.getDiametro()<<endl;
                }
                else if(op5==2){
                        int setDiametro;
                        cout<<"Introduce el diámetro de la Luna1:";cin>>setDiametro;
                        cout<<Luna1.getDiametro()<<endl;
                        cout<<"Introduce el diámetro de la Luna2:";cin>>setDiametro;
                        cout<<Luna2.getDiametro()<<endl;
                }
                else if(op5==3){
                        break;
                }
        else if(op==5){
                break;
        }
    }
    }
    }

    return 0;
};
    //cout<<Cuerpo_Celeste1.getTipoMovimiento()<<endl;
    //cout<<Cuerpo_Celeste1.getOrbitaCuerpo()<<endl;
//cout<<Cuerpo_Celeste1.getVisibles()<<endl;
    //cout<<Asteroide1.getDiametro()<<endl;
    //cout<<Cometa1.getTamanoCola()<<endl;
    //cout<<Cometa1.getVelocidadCometa()<<endl;
    //cout<<Planeta1.getDensidad()<<endl;
    //cout<<Planeta1.getDiametro()<<endl;
    //cout<<Planeta1.getNumeroLunas()<<endl;
    //cout<<Planeta1.getPeriodoOrbital()<<endl;
    //cout<<Luna1.getDiametro()<<endl;
    //cout<<Luna2.getDiametro()<<endl;
