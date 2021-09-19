#include "cuentas_clase.h"
#include "leer_archivo.h"
#include "algoritmo.h"

#include <iostream>

int main(){
    std::vector<Cuentas> archivo_procesado = leer_archivo(); //leo el archivo y lo meto en una clase
    std::vector<Cuentas> vector_final;
    Sort<Cuentas> bubble;
    std::cout<<"1. ordenar cuentas bancarias por monto de ahorro"<<std::endl;
    std::cout<<"2. ordenar cuentas bancarias por edad del cliente"<<std::endl;
    std::cout<<"3. ordenar cuentas bancarias por numero de cuenta"<<std::endl;
    std::cout<<"4. ordenar cuentas bancarias por meses activas"<<std::endl;
    std::cout<<"               Todo es de menor a mayor          "<<std::endl;
    int opcion = 0;
    while(opcion > 4 || opcion < 1){
        std::cin>>opcion;
        switch(opcion){
            case 1:
                bubble.bubbleSortMonto(archivo_procesado);
                break;
            case 2:
                bubble.bubbleSortEdad(archivo_procesado);
                break;
            case 3:
                bubble.bubbleSortNumCuenta(archivo_procesado);
                break;
            case 4:
                bubble.bubbleSortMesesCuentaActiva(archivo_procesado);
                break;
            default:
                break;
        }
    }
    std::cout<<"\n ["<<std::endl;
    int j = 1;
    for(int i = 0; i < archivo_procesado.size(); i++){
        std::cout<<"   "<<j<<". ";
        std::cout<<archivo_procesado[i].getNombre()<<std::endl;
        j += 1;
    }
    std::cout<<" ]"<<std::endl;
}