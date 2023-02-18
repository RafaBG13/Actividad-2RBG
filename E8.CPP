#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n1, n2, op;
	double Resultado;
	
	cout << "Este programa resuelve operaciones sencillas(suma, resta, division, multiplicacion)\n\n";
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
	
	cout << "Seleccione la operacion\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n";
	cin >> op;
	
	switch(op){
		case 1:{
			Resultado = n1+n2; 
			break;
		}
		case 2:{
			Resultado = n1-n2; 
			break;
		}
		case 3:{
			Resultado = n1*n2; 
			break;
		}
		case 4:{
			Resultado = n1/n2; 
			break;
		}
	}
	
	cout << "El resultado es: " << Resultado;
}