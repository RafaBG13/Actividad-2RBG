#include <iostream>

using namespace std;

int main(){
    cout << "Ingresa el total de numeros:\n";
    int No;
    cin >> No;

    int Lista [No];

    for (int i = 0; i < No; i++)
    {
        cout << "Ingresa el numero " << (i+1) << "\n";
        cin >> Lista[i];
    }

    for (int i = 1; i < No; i++)
    {
        for (int j = 0; j < (No-i); j++)
        {
            if (Lista[j] > Lista[j+1])
            {
                int aux = Lista[j];
                Lista[j] = Lista[j+1];
                Lista[j+1] = aux;
            }   
        }
    }

    for (int i = 0; i < No; i++)
    {
        cout << Lista[i] << " ";
    }
}