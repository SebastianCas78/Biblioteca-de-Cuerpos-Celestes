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
    int TipoMovimiento;
    int OrbitaCuerpo;
    int Visible;
    Cuerpo_Celeste Cuerpo_Celeste1(1,1,1);
    Asteroide Asteroide1(1,1,1,5000);
    Cometa Cometa1(1,1,1,30000000,115000);
    Planeta Planeta1(1,1,1,2,5.5,12742,365);
    Luna Luna1(3474.8);
    Luna Luna2(3121.6);

    int op;

    while (true){
    cout<<"Bienvenido a la Biblioteca de Cuerpos Celestes, ¿De que Cuerpo Celeste quieres introducir informacion?.\n"<<endl;

    int el;

    cout<<"Antes de empezar responde las siguientes preguntas (true/false):"<<endl;
    cout<<"1 = Si, es cierto.\n2 = No, es falso.\n"<<endl;
    cout<<"1)Pregunta #1.\n2)Pregunta #2.\n3)Pregunta #3.\n4)Continuar.";cin>>el;
    if(el==1){
            cout<<"¿El Cuerpo Celeste tiene algún tipo de Movimiento?:";
            cin>>TipoMovimiento;
            cout<<"Es: "<<TipoMovimiento<<endl;
    }
    else if(el==2){
            cout<<"¿El Cuerpo Celeste orbita algún otro Cuerpo?:";
            cin>>OrbitaCuerpo;
            cout<<"Es: "<<OrbitaCuerpo<<endl;
    }
    else if(el==3){
            cout<<"¿El Cuerpo Celeste es visible a simple vista desde la Tierra?:";
            cin>>Visible;
            cout<<"Es: "<<Visible<<endl;
            cout<<"El cuerpo Celeste cuenta con algún tipo de movimiento "<<TipoMovimiento<<" también orbita algun cuerpo "<<OrbitaCuerpo<<" y es visible desde el planeta "<<Visible<<"\n"<<endl;
    }
    else if(el==4){
            cout<<"\n1)Asteroide.\n2)Cometa.\n3)Planeta.\n4)Luna.\n5)Salir.\n";cin>>op;
            if(op==1){
                int op2;
                cout<<"1)Usar datos predefinidos. \n2)Ingresar datos. \n3)Salir.\n";cin>>op2;
                if(op2==1){
                        cout<<"El diametro del asteroide es de: "<<Asteroide1.getDiametro()<<" km.\n"<<endl;
                }
                else if(op2==2){
                        int setDiametro;
                        cout<<"Introduce el diametro del asteroide:";cin>>setDiametro;
                cout<<"El diametro del asteroide introducido es de: "<<setDiametro<<" km.\n"<<endl;
                }
                else if(op2==3){
                        break;
                }
        }
        else if (op==2){
                int op3;
                cout<<"1)Usar datos predefinidos. \n2)Ingresar datos. \n3)Salir.\n";cin>>op3;
                if(op3==1){
                        cout<<"El tamaño de la cola del cometa es: "<<Cometa1.getTamanoCola()<<" km.\n"<<endl;
                        cout<<"La velocidad del cometa es de: "<<Cometa1.getVelocidadCometa()<<" km/h.\n"<<endl;
                }
                else if(op3==2){
                        int setTamanoCola;
                        int setVelocidadCometa;
                        cout<<"Introduce el tamaño de la cola del Cometa:";cin>>setTamanoCola;
                        cout<<"El tamaño de la cola del cometa introducido es de: "<<setTamanoCola<<" km.\n"<<endl;
                        cout<<"Introduce la velocidad del Cometa:";cin>>setVelocidadCometa;
                        cout<<"La velocidad del cometa introducido es de: "<<setVelocidadCometa<<" km/h.\n"<<endl;
                }
                else if(op3==3){
                        break;
                }
        }
        else if (op==3){
                int op4;
                cout<<"1)Usar datos predefinidos. \n2)Ingresar datos. \n3)Salir.\n";cin>>op4;
                if(op4==1){
                        cout<<"El planeta tiene: "<<Planeta1.getNumeroLunas()<<" lunas.\n"<<endl;
                        cout<<"La densidad del planeta es: "<<Planeta1.getDensidad()<<" g/cm3.\n"<<endl;
                        cout<<"El diametro del planeta es: "<<Planeta1.getDiametro()<<" km.\n"<<endl;
                        cout<<"El periodo orbital del planeta es de: "<<Planeta1.getPeriodoOrbital()<<" dias.\n"<<endl;
                }
                else if(op4==2){
                        int setNumeroLunas;
                        int setDensidad;
                        int setDiametro;
                        int setPeriodoOrbital;
                    cout<<"Introduce el número de lunas que tiene el planeta:";cin>>setNumeroLunas;
                    cout<<"El planeta introducido tiene: "<<setNumeroLunas<<" lunas.\n"<<endl;
                    cout<<"Introduce la densidad del Planeta:";cin>>setDensidad;
                    cout<<"La densidad del planeta introducido es: "<<setDensidad<<" g/cm3.\n"<<endl;
                    cout<<"Introduce el diámetro del Planeta:";cin>>setDiametro;
                    cout<<"El diametro del planeta introducido es: "<<setDiametro<<" km.\n"<<endl;
                    cout<<"Introduce el periodo orbital del Planeta:";cin>>setPeriodoOrbital;
                    cout<<"El periodo orbital del planeta introducido es de: "<<setPeriodoOrbital<<" dias.\n"<<endl;
                }
                else if(op4==3){
                        break;
                }
        }
        else if (op==4){
                int op5;
                cout<<"1)Usar datos predefinidos. \n2)Ingresar datos. \n3)Salir.\n";cin>>op5;
                if(op5==1){
                        cout<<"El diametro de la luna es de: "<<Luna1.getDiametro()<<" km.\n"<<endl;
                        cout<<"El diametro de la segunda luna es de: "<<Luna2.getDiametro()<<" km.\n"<<endl;
                }
                else if(op5==2){
                        int setDiametro;
                        cout<<"Introduce el diámetro de la Luna1:";cin>>setDiametro;
                        cout<<"El diametro de la primer luna introducida es de: "<<setDiametro<<" km\n"<<endl;
                        cout<<"Introduce el diámetro de la Luna2:";cin>>setDiametro;
                        cout<<"El diametro de la segunda luna introducida es de: "<<setDiametro<<" km\n"<<endl;
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
