#include <iostream>

using namespace std;

int main(){
    float a, g, ra, rg, ma, mg;
    cin >> a >> g >> ra >> rg;
    ma = a/ra;
    mg = g/rg;
    if(ma < mg){
        cout << "A" << endl;
    } else
    {
        cout << "G" << endl;
    }
    return 0;
}