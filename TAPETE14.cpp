#include <iostream>

using namespace std;

int main() {
  long long int l, n;
  cin >> l >> n;
  long long int resposta = ((l-n+1)*(l-n+1))+n-1;
  cout << resposta << endl;
  return 0;
}
