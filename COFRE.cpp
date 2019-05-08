#include <iostream>
using namespace std;

int main(){
	int n, j, z, index=1;
	while(true){
		int somaj=0, somaz=0;
		cin >> n;
		if(n==0) break;
		cout << "Teste " << index << endl;
		for(int i=0; i < n; i++){
			cin >> j >> z;
			somaj+=j;
			somaz+=z;
			cout << somaj - somaz << endl;
		}
		cout << endl;
		index++;
	}
}
