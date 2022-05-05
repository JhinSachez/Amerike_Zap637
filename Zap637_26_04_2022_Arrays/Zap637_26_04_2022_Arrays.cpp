// Zap637_26_04_2022_Arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
using namespace std;
#include <iostream>
#include  <string>

int main()
{//Inventario de libros
	string titulos[5];
	string autor[5];
	int years[5];
	int contador = 0;
	
	for (int aux = 0; aux <= 4; aux++) {
		cout << "Ingrese el autor del libro #" << aux << endl;
		cin.ignore();
		getline(cin, autor[aux]);
		cout << "Ingrese el titulo del libro #" << aux << endl;
		getline(cin, titulos[aux]);
		cout << "Ingrese el año de publicacion del libro #" << aux << endl;
		cin >> years[aux];
	}

	for (int aux2 = 0; aux2 <= 4; aux2++) {
		cout << "El titulo del libro es: " << aux2 << " " <<  titulos[aux2] << endl;
		cout << "El año de publicacion del libro es: " << aux2 << " " <<  years[aux2] << endl;
		cout << "El autor del  libro es: " << aux2 << " " << autor[aux2] << endl;
		cout << "-----------------" << endl;
	}

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
