// Zap637_10_05_2022_TamañoArrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
using namespace std;
#include <iostream>

int main()
{
    /* int edades[3][2] = {{1, 2},{9,8},{14,21}};
     int filas = (sizeof(edades) / sizeof(edades[0]));
     cout << filas << endl;
     int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
     cout << columnas << endl;*/
    srand(time(NULL));
    int matriz[3][3];
    int matriz2[5][5];
    int matriz3[10][10];

    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++) {

        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++) {

            matriz[i][j] = rand() % 9;
            cout << "Posicion[" << i << "][" << j << "]: " << matriz[i][j] << endl;
        }

    }
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++) {

        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++) {

            cout << matriz[i][j];
        }
        cout << "\n";
    }

    cout << "------------------------------------------------------------------" << endl;
    cout << "Matriz de 5 X 5" << endl;
    for (int i = 0; i < (sizeof(matriz2) / sizeof(matriz2[0])); i++) {

        for (int j = 0; j < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); j++) {

            matriz2[i][j] = rand() % 9;
            cout << "Posicion[" << i << "][" << j << "]: " << matriz2[i][j] << endl;
        }

    }
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < (sizeof(matriz2) / sizeof(matriz2[0])); i++) {

        for (int j = 0; j < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); j++) {

            cout << matriz2[i][j];
        }
        cout << "\n";
    }

    cout << "------------------------------------------------------------------" << endl;
    cout << "Matriz de 10 X 10" << endl;
    for (int i = 0; i < (sizeof(matriz3) / sizeof(matriz3[0])); i++) {

        for (int j = 0; j < (sizeof(matriz3[0]) / sizeof(matriz3[0][0])); j++) {

            matriz3[i][j] = rand() % 9;
            cout << "Posicion[" << i << "][" << j << "]: " << matriz3[i][j] << endl;
        }

    }
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < (sizeof(matriz3) / sizeof(matriz3[0])); i++) {

        for (int j = 0; j < (sizeof(matriz3[0]) / sizeof(matriz3[0][0])); j++) {

            cout << matriz3[i][j];
        }
        cout << "\n";
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
