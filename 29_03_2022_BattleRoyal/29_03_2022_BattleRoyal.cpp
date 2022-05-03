// 29_03_2022_BattleRoyal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	string Jugador1 = "Manuel";
	int Ataque1 = 0;
	string Jugador2 = "Angel";
	int Ataque2 = 0;
	string Jugador3 = "Cristina";
	int Ataque3 = 0;
	string Jugador4 = "Ruben";
	int Ataque4 = 0;
	string Jugador5 = "Francisco";
	int Ataque5 = 0;
	string Jugador6 = "Rogelio";
	int Ataque6 = 0;
	string Jugador7 = "Presi";
	int Ataque7 = 0;
	string Jugador8 = "Ivan";
	int Ataque8 = 0;
	string Jugador9 = "Mauricio";
	int Ataque9 = 0;
	string Jugador10 = "Dylan";
	int Ataque10 = 0;

	cout << "Ingrese el ataque del jugador 1" << endl;
	cin >> Ataque1;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque2;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque3;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque4;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque5;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque6;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque7;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque8;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque9;
	cout << "Ingrese el ataque del jugador 2" << endl;
	cin >> Ataque10;


	if (Ataque1 > Ataque2 && Ataque1 > Ataque3 && Ataque1 > Ataque4 && Ataque1 > Ataque5 && Ataque1 > Ataque6 && Ataque1 > Ataque7 && Ataque1 > Ataque8 && Ataque1 > Ataque9 && Ataque1 > Ataque10) {
		cout << Jugador1 << " es el mas fuerte" << endl; 
	}
	if (Ataque2 > Ataque3 && Ataque2 > Ataque4 && Ataque2 > Ataque5 && Ataque2 > Ataque6 && Ataque2 > Ataque7 && Ataque2 > Ataque8 && Ataque2 > Ataque9 && Ataque2 > Ataque10) {
		cout << Jugador2 <<" es el mas fuerte" << endl;
	}
	if (Ataque3 > Ataque4 && Ataque3 > Ataque5 && Ataque3 > Ataque6 && Ataque3 > Ataque7 && Ataque3 > Ataque8 && Ataque3 > Ataque9 && Ataque3 > Ataque10) {
		cout << Jugador3 << " es el mas fuerte" << endl;
	}
	if (Ataque4 > Ataque5 && Ataque4 > Ataque6 && Ataque4 > Ataque7 && Ataque4 > Ataque8 && Ataque4 > Ataque9 && Ataque4 > Ataque10) {
		cout << Jugador4 << " es el mas fuerte" << endl;
	}
	if (Ataque5 > Ataque6 && Ataque5 > Ataque7 && Ataque5 > Ataque8 && Ataque5 > Ataque9 && Ataque5 > Ataque10) {
		cout << Jugador5 << " es el mas fuerte" << endl;
	}
	if (Ataque6 > Ataque7 && Ataque6 > Ataque8 && Ataque6 > Ataque9 && Ataque6 > Ataque10) {
		cout << Jugador6 << " es el mas fuerte" << endl;
	}
	if (Ataque7 > Ataque8 && Ataque7 > Ataque9 && Ataque10) {
		cout << Jugador7 << " el mas fuerte es" << endl;
	}
	if (Ataque8 > Ataque9 && Ataque8 > Ataque10) {
		cout << Jugador8 << " el mas fuerte" << endl;
	}
	if (Ataque9 > Ataque10) {
		cout << Jugador9 << " Es ka verga" << endl;
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
