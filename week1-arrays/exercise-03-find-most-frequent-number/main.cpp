#include <iostream>
using namespace std;

int leerEntradaUsuario(int &valor)
{
    while (!(cin >> valor))
    {
        cout << "Entrada invalida. Intenta de nuevo: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    return valor;
}

void leerDatosDeEntradaArray(int array[], int &size, const int MAX_SIZE)
{
    cout << "Ingrese el tamanio del arreglo: ";
    while (leerEntradaUsuario(size) > MAX_SIZE)
    {
        cout << "Fuera del rango (1 - 100)" << endl;
        cout << "Ingrese el tamanio del arreglo: ";
    }


    cout << "Ingrese los " << size << " numeros:" << endl;
    for (int i = 0; i < size; i++)
    {
        leerEntradaUsuario(array[i]);
    }
}

void encontrarNumeroMasRepetido(const int array[], int size, int &numeroMasRepetido, int &numeroApariciones)
{
    for (int i = 0; i < size; i++)
    {
        int contadorApariciones = 0;

        for (int j = 0; j < size; j++)
        {
            int valorActual = array[i];

            if (array[j] == valorActual)
            {
                contadorApariciones++;
            }
        }

        if (contadorApariciones > numeroApariciones)
        {
            numeroApariciones = contadorApariciones;
            numeroMasRepetido = array[i];
        }
    }
}

int main()
{
    int MAX_SIZE = 100;
    int ARRAY_SIZE;
    int array[MAX_SIZE];

    
    leerDatosDeEntradaArray(array, ARRAY_SIZE, MAX_SIZE);
    
    int numeroApariciones = -1;
    int numeroMasRepetido = -1;
    
    encontrarNumeroMasRepetido(array, ARRAY_SIZE, numeroMasRepetido, numeroApariciones);

    cout << "El numero que mas veces se repite es: " << numeroMasRepetido << endl;
    cout << "Numero de apariciones: " << numeroApariciones << endl;
}