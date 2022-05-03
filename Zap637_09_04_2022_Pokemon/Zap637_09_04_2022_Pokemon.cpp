// Zap637_09_04_2022_Pokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

using namespace std;
#include <iostream>
bool continuar = true;
int main()
{
	do {

		string Ataques = "Placaje y Defensa";
		int Pokemon;
		int svida = 45;
		int sdef = 55;
		int satk = 45;
		int svel = 63;
		int tvida = 65;
		int tdef = 45;
		int tatk = 63;
		int tvel = 45;
		int ovida = 55;
		int odef = 45;
		int oatk = 55;
		int ovel = 45;
		int golpe;
		cout << "Bienvenido al mundo de los Pokemon\n";
		cin.get();
		cout << "Antes de que salgas de aventura ocupo que eligas uno de estos pokemon\n";
		cin.get();
		cout << "Escriba 0 para recibir un snivy\nEscriba 1 para recibir un tepig\nEscriba 2 para recibir un oshawott\n";
		cin >> Pokemon;
		switch (Pokemon) {
		case 0:
			cout << "Usted obtuvo un snivy\n";
			cout << "*Revisas sus datos*\n";
			cout << "HP:" << svida << endl << "Atk:" << satk << endl << "Def:" << sdef << endl << "Vel" << svel << endl << "Sus ataques:" << Ataques << endl;
			cout << "*Tu rival se acerca y te pide un combate\n";
			while (svida >= 0 && tvida >= 0) {
				cout << "Eliga 0 para atacar, 1 para defender\n";
				cin >> golpe;
				switch (golpe) {
				case 0:
					cout << "Snivy ah atacado a Tepig" << endl;
					tvida -= 12;
					cout << "La vida de Tepig es : " << tvida << endl;
					cout << "Tepig a atacado a Snivy" << endl;
					svida -= 14;
					cout << "La vida de Snicy es : " << svida << endl;
					break;

				case 1:
					cout << "Snivy se ah defendido" << endl;
					cout << "Tepig ah atacado" << endl;
					svida - 5;
					break;
				default:
					cout << "ingrese uno de los 2 valores dados anteriormente" << endl;
				}
			}
			if (svida <= 0) {
				cout << "Haz perdido el combate\n";
			}
			else {
				cout << "Haz ganado la batalla\n";
			}
			break;
		case 1:
			cout << "Usted obtuvo un Tepig\n";
			cout << "*Revisas sus datos*\n";
			cout << "HP:" << tvida << endl << "Atk:" << tatk << endl << "Def:" << tdef << endl << "Vel" << tvel << endl << "Sus ataques:" << Ataques << endl;
			cout << "*Tu rival se acerca y te pide un combate\n";
			while (tvida >= 0 && ovida >= 0) {
				cout << "Eliga 0 para atacar, 1 para defender\n";
				cin >> golpe;
				switch (golpe) {
				case 0:
					cout << "Tepig a atacado a Oshawott" << endl;
					ovida -= 14;
					cout << "La vida de Oshawott es: " << ovida << endl;
					cout << "Oshawott a atacado a Tepig" << endl;
					tvida -= 10;
					cout << "La vida de Tepig es : " << tvida << endl;
					break;

				case 1:
					cout << "Tepig se ah defendido" << endl;
					cout << "Oshawott ah atacado" << endl;
					tvida - 3;
					break;
				default:
					cout << "ingrese uno de los 2 valores dados anteriormente" << endl;
				}
			}
			if (tvida <= 0) {
				cout << "Haz perdido el combate\n";
			}
			else {
				cout << "Has ganado el combate\n";
			}
			break;
		case 2:
			cout << "Usted obtuvo un Oshawott\n";
			cout << "*Revisas sus datos*\n";
			cout << "HP:" << ovida << endl << "Atk:" << oatk << endl << "Def:" << odef << endl << "Vel" << ovel << endl << "Sus ataques:" << Ataques << endl;
			cout << "*Tu rival se acerca y te pide un combate\n";
			while (ovida >= 0 && svida >= 0) {
				cout << "Eliga 0 para atacar, 1 para defender\n";
				cin >> golpe;
				switch (golpe) {
				case 0:
					cout << "Snivy ah atacado a Oshawott" << endl;
					ovida -= 12;
					cout << "La vida de Oshawott es: " << ovida << endl;
					cout << "Oshawott a atacado a Snivy" << endl;
					svida -= 10;
					cout << "La vida de Snivy es : " << svida << endl;
					break;

				case 1:
					cout << "Oshawott se ah defendido" << endl;
					cout << "Snivy ah atacado" << endl;
					ovida - 4;
					break;
				default:
					cout << "ingrese uno de los 2 valores dados anteriormente" << endl;
				}
			}
			if (ovida <= 0) {
				cout << "Haz perdido el combate\n";
			}
			else {
				cout << "Has ganado el combate\n";
			}
			break;

		default:
			cout << "No entiendo lo que me pide\n";
		}
		cout << "Ingrese 0 para no salir\nIngrese 1 para salir\n";
		cin >> continuar;
	} while (continuar == 0);
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
