#include <iostream>

using namespace std;

int main(){
    int p1, p2, c1, c2;
    cin >> p1 >> c1 >> p2 >> c2;
    int esquerda = p1*c1;
    int direita = p2*c2;
    if(esquerda == direita){
        cout << "0" << endl;
    } else if(esquerda < direita){
        cout << "1" << endl;
    } else if(esquerda > direita){
        cout << "-1" << endl;
    }
    return 0;
}