#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string getSum(string r1, string r2) {
  reverse(begin(r1), end(r1));
  reverse(begin(r2), end(r2));
  string sum = to_string(stoi(r1) + stoi(r2));
  reverse(begin(sum), end(sum));
  return sum;
}

int main(){
  int n;
  string r1, r2;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> r1 >> r2;
    cout << getSum(r1, r2);
  }
  return 0;
}
