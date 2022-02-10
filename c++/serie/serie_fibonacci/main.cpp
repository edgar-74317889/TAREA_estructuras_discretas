#include <iostream>
using namespace std;

int main() {
    int n,newnum,suma;
    int numA = 0;
    int numB = 1;

    cout << "\n     SERIE DE FIBONACCI - ITERATIVIDAD"<<endl;
    cout << "\n     - Ingrese la cantidad de numeros a mostrar: ";
    cin>>n;

    for (int i=0; i<n; i++){
        cout << " - FIBONACCI: " << numA << endl; 
        newnum = numA + numB;
        //numB = numA;
        //numA = newnum;
        cout << "   sumando: " << newnum << endl;
		suma += newnum;
        
        numA = numB;
        numB = newnum;      
    }

    cout << "\n - LA SUMA ES: " << suma << endl;

    return 0;
}