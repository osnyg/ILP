#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	int n, ent, it=0;
	cin >> n;
	while(n!=0){
		for (int i = 1; i <= n; ++i)
		{
			cin >> ent;
			if(ent == i){
				cout << "Teste " << it+1 << endl;
				cout << i << endl;
				cout << endl;
			}
		}
		cin >> n;
		if(n == 0) break;
		it++;
	}
	return 0;
} 

