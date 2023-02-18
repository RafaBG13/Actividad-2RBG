#include <iostream>

using namespace std;

int main (){
cout << "De que tamaño es la matriz? \n";
    int t;
    cin >> t;
    int suma = 0;
    int matriz [t][t];
    
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout << "Escriba el elemento " << (j+1) << " del renglon " << (i+1) << ".\n";
            cin >> matriz[i][j];
        }
        cout << "\n";
    }
    
    for (int i = 0; i < t; i++)
    {
        suma += matriz[i][i];
    }

    cout << "La suma de la diagonal principal es: " << suma;
}