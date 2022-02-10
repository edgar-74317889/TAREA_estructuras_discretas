#include <iostream>
using namespace std;

int main() {
  
  int i,n,factorial = 1;
  cout << "\n     FACTORIAL POR ITERATIVIDAD"<<endl;
  cout << "\n - Ingrese un numero: ";
  cin>>n;
  
  for (i=1;i<=n;i++){
      factorial = factorial * i;
  }
  cout << "\n  El factorial de ("<< n <<") es: "<< factorial;
}