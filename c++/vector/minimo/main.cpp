#include <iostream>
using namespace std;

int main(){

    int i,n,minimo;
    int Array[n];
    //pidiendo la cantidad de elemntos del array
    cout << "\n     Ingrese la cantidad de elementos: ";
    cin >> n;
    //ingresando elemntos al array
    for (i=0;i<n;i++){
        cout << " - Elemento "<< i << ": ";
        cin >> Array[i];
        if (minimo < Array[i]){
            minimo = Array[i];
        }
    }
    cout <<endl;
    //mostrnado el array generado 
    cout << "  Array[n] = { ";
    for (i=0; i<n;i++){
        cout << Array[i] << ", ";
    }
    cout << "}"<<endl;
    cout << " - El menor elemento del vector es: " <<minimo;
    return 0;
}