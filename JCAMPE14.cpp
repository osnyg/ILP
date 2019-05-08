#include <iostream>

using namespace std;

int main() {
  int c1,c2,c3,f1,f2,f3;
  cin >> c1 >> c2 >> c3 >> f1 >> f2 >> f3;
  int placarCorminthians = c1*3 + c2*1;
  int placarF = f1*3 + f2*1;
  if(placarF == placarCorminthians){
    if(c3>f3){
      cout << "C" << endl;
    } else if(f3 > c3){
      cout << "F" << endl;
    } else {
      cout << "=" << endl;
    }
  } else if (placarF > placarCorminthians){
    cout << "F" << endl;
  } else {
    cout << "C" << endl;
  }
  return 0;
}
