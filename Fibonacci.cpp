// otro!!! fibonacci ejercicio 2 13/04/2024
// hay que arreglarlo... porque te da 3 numeros por cada repeticion y solo queremos 1!!

#include <iostream>
using namespace std;

int main()
{
    int veces;
    int n1 = 0;
    int n2 = 1;
    int n3 = 0;
    int c = 1;

    cout << "Introduzca la cantidad de números que desea generar: ";
    cin >> veces;
    cout << endl;

    cout << n1 << ", " << n2 << ", ";

    do {
        n3 = n2 + n1;
        cout << n3 << ", ";
        n1 = n3 + n2;
        cout << n1 << ", ";
        n2 = n1 + n3;
        cout << n2;
    }
    while (c <= (veces - 2));

    return 0;
}