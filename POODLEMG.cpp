#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, p, bucket;
  while (true) {
    cin >> n >> p;
    if(n == 0 && p == 0) break;
    bucket = n%p != 0 ? n/p + 1 : n/p;
    bucket = bucket > 20 ? bucket = 20 : bucket;
    if(bucket >= 6 && bucket <= 20){
      cout << "P";
      for (int i = 0; i < bucket-4; i++) {
        cout << "o";
      }
      cout << "dle" << endl;
    } else {
      cout << "Poodle" << endl;
    }
  }
  return 0;
}
