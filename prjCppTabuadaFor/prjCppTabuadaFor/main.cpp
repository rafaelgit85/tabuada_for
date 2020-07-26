#include<iostream>

using namespace std;

void main() {

	int tabuada=0;
	


	cout << "\tTABUADA" << endl;
	cout << "\t-------\n" << endl;
	do
	{ 
		cout << "  Diga a tabuada desejada: ";
		cin >> tabuada;
	} while (tabuada < 0 || tabuada > 11);
	cout << "\n";

	for (int cont = 0, result;cont <=11; cont++)
	{
		result = tabuada * cont;
		cout << "  " << tabuada << " x " << cont << " = " << result << endl;
	}
	
	
	
	}



