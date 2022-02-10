#include <iostream>
using namespace std;

int recur_fact(int n){
  if(n==1){
    return 1;
  }
  else{
    return n * recur_fact(n-1);
  }
}

int main() {
  int n;
  cout << "\n     FACTORIAL POR RECURSIVIDAD"<<endl;
  cout << "\n- Introduzca numero: ";
  cin >> n;
  cout << "\n   El factorial de ("<< n <<") es: " << recur_fact(n) << endl;
}