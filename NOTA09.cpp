#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>=1 && n<=35) cout << "D" <<endl;
    else if(n>35 && n<=60) cout << "C" <<endl;
    else if(n>60 && n<=85) cout << "B" <<endl;
    else if(n>85 && n<=100) cout << "A" <<endl;
    else cout << "E" << endl;
    return 0;
}