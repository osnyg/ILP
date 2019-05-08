#include <iostream>

using namespace std;

int main(){
  int a,v,x,y,k=0;
  while (true) {
    int maior = 0;
    int maiorVoo = 0;
    cin >> a >> v;
    if(a == 0 && v == 0) break;
    int aeroportos[a] = {};
    for(int i = 0; i < v; i++){
      cin >> x >> y;
      aeroportos[x - 1]++;
      aeroportos[y - 1]++;
    }
    for (int i = 0; i < a; i++) {
      if(aeroportos[i] > maior){
        maior = aeroportos[i];
      }
    }
    cout << "Teste " << ++k << endl;
    for (int i = 0; i < a; i++) {
      if (aeroportos[i] == maior) {
        cout << i + 1 << " ";
      }
    }
    cout << endl << endl;
  }
}
