#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    short p, r;
    cin >> p >> r;
    if(p==0){
        cout << "C" << endl;
    } else if(r==0){
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }
    return 0;
}
