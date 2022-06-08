// Zap637_08_06_22_BattleRoyal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Personajes {
    std::string nombre;
    int vida;
    int defensa;
    int ataque;
    int velocidad;
}p[8];

void stats() {  
    for (int i = 0; i < sizeof(p) / sizeof(p[i]); i++) {
        cout << "Introduzca el nombre del jugador " << i + 1 << " : ";
        std::getline(std::cin, p[i].nombre);
        std::cout << std::endl;
        p[i].ataque = rand() % 10;
        p[i].defensa = rand() % 10;
        p[i].vida = rand() % 10;
        p[i].velocidad = rand() % 10;
        cout << "--- Jugador #" << i + 1 << ": " << p[i].nombre << " ---\n";
        cout << "  -Su HP es: " << p[i].vida << "\n";
        cout << "  -Su ataque es: " << p[i].ataque << "\n";
        cout << "  -Su defensa es: " << p[i].defensa << "\n";
        cout << "  -Su velocidad es: " << p[i].velocidad << "\n";
        cout << "\n";
        system("pause");
        system("CLS");
    }
}

void Extremista() {
    int maxVida, maxDefensa, maxAtaque, maxVelocidad, menorVida, menorDefensa, menorAtaque, menorVelocidad;
    for (int i = 0; i < sizeof(p) / sizeof(p[i]); i++) {
        if (i == 0) {
            maxVida = i;
        }
        else
        {
            if (p[i].vida > p[i - 1].vida) {
                maxVida = i;
            }
        }
        if (i == 0) {
            maxVida = i;
        }
        else
        {
            if (p[i].defensa > p[i - 1].defensa) {
                maxDefensa = i;
            }
        }
        if (i == 0) {
            maxAtaque = i;
        }
        else
        {
            if (p[i].ataque > p[i - 1].ataque) {
                maxAtaque = i;
            }
        }
        if (i == 0) {
            maxVelocidad = i;
        }
        else
        {
            if (p[i].velocidad > p[i - 1].velocidad) {
                maxVelocidad = i;
            }
        }
    }
    cout << "---AHORA LOS PARTICIPANTES MAS SOBRESALIENTES SON: ---\n";
    std::cout << " el lucahdor con mas vida es:" << p[maxVida].nombre << " con: " << p[maxVida].vida << std::endl;
    std::cout << p[maxDefensa].nombre << " es el gladiador con mas defensa, con: " << p[maxDefensa].defensa << std::endl;
    std::cout << p[maxAtaque].nombre << " es el gladiador con mas ataque, con: " << p[maxAtaque].ataque << std::endl;
    std::cout << p[maxVelocidad].nombre << " es el gladiador con mas velocidad, con: " << p[maxVelocidad].velocidad << std::endl;
    system("pause");
    system("CLS");

    for (int i = 0; i < sizeof(p) / sizeof(p[i]); i++) {
        if (i == 0) {
            menorVida = i;
        }
        else
        {
            if (p[i].vida < p[i - 1].vida) {
                menorVida = i;
            }
        }
        if (i == 0) {
            menorDefensa = i;
        }
        else
        {
            if (p[i].defensa < p[i - 1].defensa) {
                menorDefensa = i;
            }
        }
        if (i == 0) {
            menorAtaque = i;
        }
        else
        {
            if (p[i].ataque < p[i - 1].ataque) {
                menorAtaque = i;
            }
        }
        if (i == 0) {
            menorVelocidad = i;
        }
        else
        {
            if (p[i].velocidad < p[i - 1].velocidad) {
                menorVelocidad = i;
            }
        }

    }

    std::cout << p[menorVida].nombre << " es el gladiador con menor vida, con: " << p[menorVida].vida << std::endl;
    std::cout << p[menorDefensa].nombre << " es el gladiador con menor defensa, con: " << p[menorDefensa].defensa << std::endl;
    std::cout << p[menorAtaque].nombre << " es el gladiador con menor ataque, con: " << p[menorAtaque].ataque << std::endl;
    std::cout << p[menorVelocidad].nombre << " es el gladiador con menor velocidad, con: " << p[menorVelocidad].velocidad << std::endl;
    system("pause");
    system("CLS");

}


int main()
{
    int retador = 0, enemigo = 0, retadorP, enemigoP;
    std::cout << "Bienvenido al derby de demolicion. Las pobres almas que lucharan en este combate son: " << std::endl;
    system("pause");
    system("CLS");
    stats();
    Extremista();

    std::cout << "Pasamos a la batalla: " << std::endl;
    system("pause");
    system("CLS");

    while (enemigo < 7) {
        retadorP = 0;
        enemigoP = 0;
        enemigo++;
        if (p[retador].vida < p[enemigo].vida) {
            enemigoP++;
        }
        else {
            retadorP++;
        }
        if (p[retador].defensa < p[enemigo].defensa) {
            enemigoP++;
        }
        else {
            retadorP++;
        }
        if (p[retador].ataque < p[enemigo].ataque) {
            enemigoP++;
        }
        else {
            retadorP++;
        }
        if (p[retador].velocidad < p[enemigo].velocidad) {
            enemigoP++;
        }
        else {
            retadorP++;
        }
        if (retadorP > enemigoP) {
            continue;
        }
        else {
            retador = enemigo;
            continue;
        }

    }
    std::cout << "El ganador es: " << p[retador].nombre;
}