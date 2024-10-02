#include <iostream>

using namespace std;

void sumar_matrices(int m, int n, int matriz1[][10], int matriz2[][10], int resultado[][10]) {

    for (int i = 0; i < m; i++) {

        for (int j = 0; j < n; j++) {

            resultado[i][j] = matriz1[i][j] + matriz2[i][j];

        }

    }

}

int main() {
	cout << "Universidad Antonio Narino\n";
	cout << "Ingenieria de Sistemas y Computacion\n";
	cout << "Profesor: Cristian Pulido\n";
	cout << "Presentado por: Maria Camila Duarte\n";
	cout << "Suma de matrices\n";
	cout << "===================================================\n";	
    cout << " \n";
	cout << " \n";
	cout << " \n";
	int m, n;
    cout << "Introduce el numero de filas y columnas de las matrices: ";
    cin >> m >> n;

    int matriz1[10][10], matriz2[10][10], resultado[10][10];

    cout << "Introduce los elementos de la primera matriz:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Introduce los elementos de la segunda matriz:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz2[i][j];
        }
    }

    sumar_matrices(m, n, matriz1, matriz2, resultado);

    cout << "La suma de las matrices es:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
