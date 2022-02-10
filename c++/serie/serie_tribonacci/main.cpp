#include <iostream>
using namespace std;

int main() {
    int n,newnum,suma;
    int numA = 0;
    int numB = 0;
    int numC = 1;

    cout << "\n     SERIE DE TRIBONACCI - ITERATIVIDAD"<<endl;
    cout << "\n     - Ingrese la cantidad de numeros a mostrar: ";
    cin>>n;

    for (int i=0; i<n; i++){
        cout << " - TRIBONACCI: " << numA << endl; 
        newnum = numA + numB + numC;
        //numB = numA;
        //numA = newnum;
        
        numA = numB;
        numB = numC;
        numC = newnum;      
    }

    return 0;
}