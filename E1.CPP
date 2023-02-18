#include <iostream>

using namespace std;

int main (){
    cout << "Ingresa la base del rectangulo.\n";
    double base;
    cin >> base;
    
    cout << "Ingresa la altura del rectangulo.\n";
    double altura;
    cin >> altura;

    double area = base * altura;
    double perimetro = (2*base)+(2*altura);

    cout << "El area del rectangulo es: " << area <<".\nEl perimetro del rectangulo es: " << perimetro <<" .\n";
}