#include<iostream>
using namespace std;

int tribonacci(int x) {
    if (x == 0)
        return 0;
    else if (x == 1)
    return 1;    
    return tribonacci(x-1) + tribonacci(x-2) + tribonacci(x-3);    
}

int main() {
    int n;
    cout << "\n     SERIE DE TRIBONACCI - RECURSIVIDAD"<<endl;
    cout << "\n     - Ingrese la cantidad de numeros a mostrar: ";
    cin>>n;
    cout << tribonacci(n) << endl;
    return 0;
}