#include<iostream>

using namespace std;
int tabuada = 0;
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

int forTabuada() {
	for (int cont = 0, result; cont <= 11; cont++)
	{
		result = tabuada * cont;
		cout << "  " << tabuada << " x " << cont << " = " << result << endl;
	}
	return tabuada;
}

void main() {

	

	titulo();
//tabuada =leTabuada(tabuada);
	leTabuada2();

	forTabuada();
	
	
	
	
	}



