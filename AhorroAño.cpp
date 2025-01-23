// holaasdjaj esta aes mi practica del loop while :3

#include <iostream>
using namespace std;

int main()
{
    int dineroTotal = 0;
    int mes = 1;
    float dineroSuma;

    do {
        cout << "Introduzca la cantidad de dinero para ahorrar este mes: ";
        cin >> dineroSuma;
        cout << endl;

        dineroTotal = dineroSuma + dineroTotal;
        
        cout << "En el mes " << mes << " ahorró $" << dineroTotal << endl;
        mes = mes + 1;
    }
    while (mes <= 12);

return 0;

}