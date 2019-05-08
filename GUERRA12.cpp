#include <iostream>

using namespace std;

int main(){
  int n, soma=0, somap=0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    soma += a[i];
  }
  for(int i = 0; i < n; i++)
  {
    somap +=a[i];
    if(somap == soma/2){
      cout << i+1 << endl;
      break;
    }
  }
}
