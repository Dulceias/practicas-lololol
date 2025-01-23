#include <iostream>
using namespace std;

int main(){
	
	int n, n2;

	cout << "Ingrese la cantidad de filas en la matriz: ";
	cin >> n;
	cout << endl;

	cout << "Ingrese la cantidad de columnas en la matriz: ";
	cin >> n2;
	cout << endl;

	int mat[n][n2];

	for(int i = 0; i < n; i++){
		for (int j = 0; j < n2; j++){
			cout << "Ingrese el elemento de la fila " << i << " y columna " << j << ": ";
			cin >> mat[i][j];
			cout << endl;
		}
	}

	for(int i = 0; i < n; i++){
			mat[i][i] = 0;
	}

	cout << "La matriz es: " << endl;

	for(int i = 0; i < n; i++){
		for (int j = 0; j < n2; j++){
			cout << mat[i][j] << " ";
		}
			cout << endl;
	}

	return 0;
}