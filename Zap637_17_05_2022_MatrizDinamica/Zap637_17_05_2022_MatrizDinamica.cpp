// Zap637_17_05_2022_MatrizDinamica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
using namespace std;
#include <iostream>

int main()
{
	srand(time(NULL));
	int filas;
	int columnas;

	cout << "Ingrese el numero de filas y columnas que quiera\n";
	cin >> filas >> columnas;
	int** matriz = new int* [filas];
	for (int i = 0; i < filas; i++) {
		matriz[i] = new int[columnas];
	}

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			matriz[i][j] = 0;
			if (filas && columnas > 3) {
				matriz[i][j] = rand() % 9;
				cout << "Num[" << i << "][" << j << "]: " << matriz[i][j] << endl;
			}
			else {
				cout << "Num[" << i << "][" << j << "]: ";
				cin >> matriz[i][j];
			}
		}
	}
	cout << "--------------------------------------------------------------------------------------------------\n";
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << matriz[i][j];
		}
		cout << "\n";
	}

	for (int i = 0; i < filas; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;
	matriz = NULL;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
