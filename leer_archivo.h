#include <fstream>
#include <vector>
#include <sstream>
#include <string>

#include "cuentas_clase.h"
#define NOMBRE_ARCHIVO "cuentas_bancarias.csv"

std::vector<Cuentas> leer_archivo(){

    std::vector<Cuentas> cuentas; //el vector de todas las cuentas
    int i = 1; //para nombrar las cuentas distinto

    std::ifstream archivo(NOMBRE_ARCHIVO); //leo archivo 
    std::string linea; //declaro variable para guardar linea por linea
    char delimitador = ','; //separador de las variables
    getline(archivo, linea); //guardo primera linea para que avance y descarte encabezados
    while(getline(archivo, linea)){

        std::stringstream stream(linea); //convierto string a stream
        std::string nombre, monto, edad, num_cuenta, meses_cuenta_activa;
        getline(stream, nombre, delimitador);
        getline(stream, monto, delimitador);
        getline(stream, edad, delimitador);
        getline(stream, num_cuenta, delimitador);
        getline(stream, meses_cuenta_activa, delimitador);

        Cuentas *c1 = new Cuentas(nombre, std::stof(monto), std::stoi(edad), std::stoi(num_cuenta), std::stoi(meses_cuenta_activa));
        cuentas.push_back(*c1);
    }
    return cuentas;
}