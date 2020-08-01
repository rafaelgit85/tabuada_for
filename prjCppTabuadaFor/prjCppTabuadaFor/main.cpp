#include<iostream>

using namespace std;

void titulo() {
	cout << "\tTABUADA" << endl;
	cout << "\t-------\n" << endl;
}
//
//int leTabuada(int tabuada)
//{
//	do
//	{
//		cout << "  Diga a tabuada desejada: ";
//		cin >> tabuada;
//	} while (tabuada < 0 || tabuada > 11);
//	cout << "\n";
//	return tabuada;
//}

int leTabuada2()
{
	
	        do
			{
				cout << "  Diga a tabuada desejada: ";
				cin >> tabuada;
			} while (tabuada < 0 || tabuada > 11);
			cout << "\n";
			return tabuada;

}

void calcular_MostrarTabuada(int copiaTabuada) {
	for (int cont = 0, result; cont <= 11; cont++)
	{
		result = copiaTabuada * cont;
		cout << "  " << copiaTabuada << " x " << cont << " = " << result << endl;
	
	}
	
}

void main() {

	int tabuada = 0;

	titulo();
//tabuada =leTabuada(tabuada);
	tabuada = leTabuada2();

	calcular_MostrarTabuada(tabuada);
	
	
	
	
	}



