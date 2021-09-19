#ifndef cuentas_clase_h
#define cuentas_clase_h

#include <string>

class Cuentas{

    private:
        std::string nombre;
        int monto, edad, num_cuenta, meses_cuenta_activa;
    public:
        Cuentas();
        Cuentas(std::string name, int amount, int years, int account_num, int months);

        std::string getNombre();
        int getMonto();
        int getEdad();
        int getNum_cuenta();
        int getMeses_cuenta_activa();
};

Cuentas::Cuentas(std::string name, int amount, int years, int account_num, int months){
    nombre = name;
    monto = amount;
    edad = years;
    num_cuenta = account_num;
    meses_cuenta_activa = months;
}

std::string Cuentas::getNombre(){
    return nombre;
}
int Cuentas::getMonto(){
    return monto;
}
int Cuentas::getEdad(){
    return edad;
}
int Cuentas::getNum_cuenta(){
    return num_cuenta;
}
int Cuentas::getMeses_cuenta_activa(){
    return meses_cuenta_activa;
}

#endif