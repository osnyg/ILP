#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, novo, prev=0, maior=0, it=0;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> novo;
    if (novo == prev) it++;
    else {
      if(it > maior) maior = it;
      prev = novo;
      it = 1;
    }
  }
  if(it > maior) maior = it;
  cout << maior << endl;
  return 0;
}
