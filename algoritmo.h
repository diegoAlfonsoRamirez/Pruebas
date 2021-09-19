#include <vector>
#include <iostream>
#include <list>

template <class T>
class Sort{
    public:
        void bubbleSortMonto(std::vector<T> &vector);
        void bubbleSortEdad(std::vector<T> &vector);
        void bubbleSortNumCuenta(std::vector<T> &vector);
        void bubbleSortMesesCuentaActiva(std::vector<T> &vector);
    private:
        void swap(std::vector<T> &v, int i, int j);
};

template <class T>
void Sort<T>::swap(std::vector<T> &v, int i, int j) {
    T aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

template <class T>
void Sort<T>::bubbleSortMonto(std::vector<T> &vector){
    for(int i = vector.size() - 1; i > 0; i--){
        for(int j = 0; j < i; j++) {
            if (vector[j].getMonto() > vector[j+1].getMonto()){
                swap(vector, j, j + 1);
            }
        }
    }
}

template <class T>
void Sort<T>::bubbleSortEdad(std::vector<T> &vector){
    for(int i = vector.size() - 1; i > 0; i--){
        for(int j = 0; j < i; j++) {
            if (vector[j].getEdad() > vector[j+1].getEdad()){
                swap(vector, j, j + 1);
            }
        }
    }
}

template <class T>
void Sort<T>::bubbleSortNumCuenta(std::vector<T> &vector){
    for(int i = vector.size() - 1; i > 0; i--){
        for(int j = 0; j < i; j++) {
            if (vector[j].getNum_cuenta() > vector[j+1].getNum_cuenta()){
                swap(vector, j, j + 1);
            }
        }
    }
}

template <class T>
void Sort<T>::bubbleSortMesesCuentaActiva(std::vector<T> &vector){
    for(int i = vector.size() - 1; i > 0; i--){
        for(int j = 0; j < i; j++) {
            if (vector[j].getMeses_cuenta_activa() > vector[j+1].getMeses_cuenta_activa()){
                swap(vector, j, j + 1);
            }
        }
    }
}