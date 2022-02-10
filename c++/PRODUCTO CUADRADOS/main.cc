//RECURSIVA

#include <iostream>

using namespace std;

    int producto(int n){
        if (n==1){
            return true;
        }
        else{
            int a;
            a = (producto(n))*(n-1)*(n-1);
            cout << a;
        }
    }

int main(){
    cout<<endl;
    producto(3);
    return 0;
}