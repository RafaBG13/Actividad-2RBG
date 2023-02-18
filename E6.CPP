#include <iostream>
 
using namespace std;

int main() {
    double suma = 0;
    double promedio = 0;

    cout << "Cuantos alumnos se evaluaran?: \n";
    int alumnos;
    cin >> alumnos;

    cout << "Escribe la cantidad de materias: \n";
    int materias;
    cin >> materias;

    double notas[alumnos][materias];

    for (int i = 0; i < alumnos; i++)
    {
        cout << "Ingresa las calificaciones del alumno " << (i+1) << "\n";
        for (int j = 0; j < materias; j++)
        {
            cout << "Ingresa la calificacion de la materia " << (j+1) << ": " << "\n";
            cin >> notas[i][j];
        }
    }
    for (int i = 0; i < alumnos; i++)
    {
        suma = 0;
        promedio = 0;
        for (int j = 0; j < materias; j++)
        {
            suma+=notas[i][j];
            promedio=suma/materias;
        }
        cout << "El promedio del alumno " << (i+1) << " es: " << promedio << "\n";
    }
}