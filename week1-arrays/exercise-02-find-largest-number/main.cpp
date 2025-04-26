#include <iostream>
#include <climits>
using namespace std;

void leerNumerosDesdeEntrada(int array[], int size)
{
    cout << "Ingrese los valores:" << endl;
    for (int i = 0; i < size; i++)
    {
        while (!(cin >> array[i]))
        {
            cout << "Entrada inválida. Intenta de nuevo" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}

void encontrarSegundoMayor(const int array[], int size, int &mayor, int &segundoMayor)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] > mayor)
        {
            segundoMayor = mayor;
            mayor = array[i];
        }
        else if (array[i] > segundoMayor && array[i] != mayor)
        {
            segundoMayor = array[i];
        }
    }
}

int main()
{
    int mayor = INT_MIN;
    int segundoMayor = INT_MIN;

    int ARRAY_SIZE;
    cout << "Ingrese la longitud del ARRAY: ";
    while (true)
    {
        while (!(cin >> ARRAY_SIZE))
        {
            cout << "Entrada inválida. Intenta de nuevo" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        if (ARRAY_SIZE >= 2)
        {
            break;
        }
        cout << "Longitud minima es de 2. Ingrese nuevamente: ";
    }

    int array[ARRAY_SIZE];

    leerNumerosDesdeEntrada(array, ARRAY_SIZE);
    encontrarSegundoMayor(array, ARRAY_SIZE, mayor, segundoMayor);

    if (segundoMayor == INT_MIN)
    {
        cout << "No existe un segundo valor distinto al mayor." << endl;
    }
    else
    {
        cout << "Segundo mayor es: " << segundoMayor << endl;
    }
    return 0;
}
