#include <iostream>

using namespace std;

int main(){
    int n, p, q, resultado;
    char c;
    cin >> n >> p >> c >> q;
    if(c=='+'){
        resultado = p+q;
    } else {
        resultado = p*q;
    }
    if(resultado > n){
        cout << "OVERFLOW" << endl;
    } else {
        cout << "OK" <<endl;
    }
    return 0;
}