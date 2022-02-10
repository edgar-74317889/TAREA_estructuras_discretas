//ITERATIVA

#include <iostream>

using namespace std;

int main(){

    int n, i ,producto;
    cout<<endl;
    cout<<"++++++++++++++++++PRODUCTO DE N NUMEROS AL CUADRADO CONSECUTIVOS+++++++++++++++"<<endl;
    cout<<endl;
    cout<<"        ingrese el numero N: ";
    cin>>n;
    producto=1;
    cout<<endl;
    for (i=1;i<=n; i++){ 
        producto=producto*(i*i);
    }
    for (i=1;i<=n; i++){
        cout<<"  ("<<i<<"^2) * ";
    }   
    cout<<" = "<<producto<<endl;
    cout<<endl;
    cout<<"         El producto es: "<<producto<<endl;
    return 0;
}