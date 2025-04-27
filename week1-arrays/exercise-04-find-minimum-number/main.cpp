#include <iostream>
using namespace std;

int leerEntradaUsuario(int &valor)
{
    while (!(cin >> valor))
    {
        cout << "Entrada invalida. Intenta de nuevo: ";
        cin.clear();
        cin.ignore(100, '\n');
    }

    return valor;
}

void leerDatoEntradaLongitudArray(int &longitud, const int MAX_SIZE)
{
    cout << "Ingrese la longitud del array: ";
    leerEntradaUsuario(longitud);

    while(longitud > MAX_SIZE || longitud < 1)
    {
        cout << "Fuera del rango (1 - 100)" << endl;
        leerEntradaUsuario(longitud);
    }
}

void llenarDatosArray(int array[], int longitud)
{
    cout << "Ingrese los " << longitud << " elementos del array (separado por espacios): ";
    for (int i = 0; i < longitud; i++)
    {
        leerEntradaUsuario(array[i]);
    }
}

void encontrarValorMinimoPosicion(const int array[], const int longitud, int &valorMin, int &valorIndice)
{
    valorMin = array[0];
    valorIndice = 0;

    for (int i = 0; i < longitud; i++)
    {
        if (array[i] < valorMin)
        {
            valorMin = array[i];
            valorIndice = i;
        }
    }
}

int main()
{
    int MAX_SIZE = 100;
    int ARRAY_SIZE;
    int array[MAX_SIZE];

    int valorMin;
    int valorIndice;

    leerDatoEntradaLongitudArray(ARRAY_SIZE, MAX_SIZE);
    llenarDatosArray(array, ARRAY_SIZE);
    encontrarValorMinimoPosicion(array, ARRAY_SIZE, valorMin, valorIndice);

    cout << "El numero minimo es " << valorMin << " y su posicion es " << valorIndice;
}