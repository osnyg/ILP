#include <iostream>
using namespace std;
int main(){
	int input;
	while (input != 42) {
		cin >> input;
		if(input != 42)
			cout << input << endl;
	}
}
