// Zap637_10_04_2022_Consultorio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

using namespace std;
#include <iostream>

int main()
{
	bool repetir = true;
	bool alergias;
	string Nombre, Origen;
	int Edad, CP;
	float peso;
	double altura;
	do {
		cout << "*Entras a una consulta medica\n";
		cout << "Ingrese su nombre\n";
		cin >> Nombre;
		if (Nombre == "Manuel") {
			cout << "Nombre correcto\n";

			cout << "Ingrese su lugar de nacimiento\n";
			cin >> Origen;
			if (Origen == "Mazatlan") {
				cout << "Dato correcto\n";

				cout << "Ingrese su edad\n";
				cin >> Edad;
				if (Edad == 19) {
					cout << "Dato correcto\n";
					cout << "Ingrese su codigo postal\n";
					cin >> CP;
					if (CP == 47700) {
						cout << "Codigo postal correcto\n";
						cout << "Ingrese su peso\n";
						cin >> peso;
						if (peso == 56.7) {
							cout << "Coincide\n";
							cout << "Ingrese su altura\n";
							cin >> altura;
							if (altura == 1.70) {
								cout << "Coincide\n";
								cout << "Tiene alergias?, Escriba 0 si tiene, escriba 1 si no tiene\n";
								cin >> alergias;
								if (alergias == false) {
									cout << "Coincide\n";
								}
								else { cout << "El dato ingresado no coincide, vuelvalo a escribir\n"; }
							}
							else { cout << "El dato ingresado no coincide, vuelvalo a escribir\n"; }
						}
						else { cout << "El dato ingresado no coincide, vuelvalo a escribir\n"; }
					}
					else { cout << "El dato ingresado no coincide, vuelvalo a escribir\n"; }
				}
				else { cout << "El dato ingresado no coincide, vuelvalo a escribir\n"; }
			}
			else { cout << "El dato ingresado no coincide, vuelvalo a escribir\n"; }
		}
		else { cout << "El dato ingresado no coincide, vuelvalo a escribir\n"; }


		cout << "Quiere salir del programa?\n";
		cout << "Para quedarse escriba 0, Para salir escriba 1\n";
		cin >> repetir;
	} while (repetir == true);
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
