#include<iostream>
using namespace std;

int fibonacci(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int n;
    cout << "\n     SERIE DE FIBONACCI - RECURSIVIDAD"<<endl;
    cout << "\n     - Ingrese la cantidad de numeros a mostrar: ";
    cin>>n;
    cout << fibonacci(n) << endl;
    
    return 0;
}