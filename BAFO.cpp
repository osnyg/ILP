#include <iostream>
using namespace std;

int main()
{
    int r=1, a, b, somaA=0, somaB=0,index=1;
    do{
    	somaA=0;
    	somaB=0;
    	cin >> r;
    	if(r==0) break;    	    	
    	for(int i =0; i < r; i++){
    		cin >> a >>b;
    		somaA += a;
    		somaB += b;
    	}
    	cout << "Teste " << index << endl;
    	cout << ((somaA > somaB) ? "Aldo" : "Beto") << endl << endl;
    	index++;
    }while(r!=0);
}