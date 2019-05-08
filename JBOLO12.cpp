#include <iostream>

using namespace std;

int main(){
    int a, b, c, ma, mb, mc;
    cin >> a >> b >> c;
    ma = a/2;
    mb = b/3;
    mc = c/5;
    if(ma <= mc && ma <= mb){
        cout << ma << endl;
    } else if(mb <= ma && mb <= mc){
        cout << mb << endl;
    } else if(mc <= ma && mc <= mb){
        cout << mc << endl;
    }
    return 0;
}