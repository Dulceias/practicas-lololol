#include <iostream>
using namespace std;

void 

int main(){

    int n;

    cout << "Ingrese la cantidad de elementos en el arreglo: ";
    cin >> n;
    cout << endl;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Ingrese el elemento " << i + 1 << " del arreglo: ";
        cin >> arr[i];
        cout << endl;
    } 

    return 0;
}