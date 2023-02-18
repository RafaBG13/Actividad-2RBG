#include <iostream>

using namespace std;

int main (){
    int Numeros[6] = {3,13,26,11,33,2};
    int M, m;
    for (int i = 0; i < 6; i++)
    {
        if (Numeros[i]>Numeros[i+1])
        {
            M = Numeros[i];
        }
        if (Numeros[i] < Numeros[i+1])
        {
            m = Numeros[i];
        }
    }
    cout << "El numero mas grande es: " << M << "\nEl numero mas chico es: " << m;
}