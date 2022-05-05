// Zap637_22_04_2022_Adivina.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    bool ciclo = true;
    int respuesta;
    do {
        cout << "Bienvenido a adivina quien de comida" << endl;
        Sleep(1000);
        cout << "Escriba 0 si es falso y 1 si es verdadero" << endl;
        Sleep(1000);
        cout << "Ya como a la mitad me quede sin ideas asi que si esta mal perdon" << endl;
        Sleep(1000);
        std::cout << "Se requieren utensilios para comerse? " << std::endl;
        std::cin >> respuesta;
        if (respuesta == 1) {
            std::cout << "Es un desayuno?" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 1) {
                std::cout << "Es de la familia de los carbohidratos?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    std::cout << "Se usa algun liquido?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "Hay muchas marcas de la comida que piensas?" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en cereales" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en avena" << std::endl;
                        }
                    }
                    else
                    {
                        std::cout << "Se usa pan con mayonesa" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en un sandwhich" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en frutas" << std::endl;
                        }
                    }
                }
                else
                {
                    std::cout << "Se utilizan webos?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "Se le pone cilantro? " << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en omellete" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en huevos revueltos" << std::endl;
                        }
                    }
                    else
                    {
                        std::cout << "Se usan salsas?" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en chilaquiles" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en un smoothie." << std::endl;
                        }
                    }
                }
            }
            else
            {
                std::cout << "Se usa una harina especifica" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    std::cout << "Sabe mejor si le pones maple?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "Lo puedes complementar con fruta?" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en waffles" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en hotcakes" << std::endl;
                        }
                    }
                    else
                    {
                        std::cout << "Es de origen italiano?" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en pasta" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en pastel" << std::endl;
                        }
                    }
                }
                else
                {
                    std::cout << "Tienes que moler carne?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "Lo puedes comer usando tostadas?" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en picadillo" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en albondigas" << std::endl;
                        }
                    }
                    else
                    {
                        std::cout << "Se usa pan rallado?" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en milanesa" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en atun " << std::endl;
                        }
                    }
                }
            }
        } else {
            std::cout << "Se usa carne para su preparacion?" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 1) {
                std::cout << "Se usan tortillas?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    std::cout << "Se usa queso?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "Estas pensando en quesadillas?" << std::endl;
                    } else {
                        std::cout << "Estas pensando en tacos" << std::endl;
                    }
                } else {
                    std::cout << "Se frie?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "Estas pensando en pollo frito" << std::endl;
                    } else {
                        std::cout << "Estas pensando en hamburguesa" << std::endl;
                    }
                }
            }
            else
            {
                std::cout << "Es de origen japones?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 1) {
                    std::cout << "Se utilizan algas?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "Estas pensando en sushi" << std::endl;
                    }
                    else
                    {
                        std::cout << "Estas pensando en takoyaki" << std::endl;
                    }
                }
                else
                {
                    std::cout << "Utiliza pan?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 1) {
                        std::cout << "Requiere que se le meta un pedazo de carne " << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en Hot dogs" << std::endl;
                        }
                        else
                        {
                            std::cout << "Estas pensando en pan normal xd" << std::endl;
                        }
                    }
                    else
                    {
                        std::cout << "Es la comida mas famosa de Italia?" << std::endl;
                        std::cin >> respuesta;
                        if (respuesta == 1) {
                            std::cout << "Estas pensando en pizza" << std::endl;
                        }
                        else
                        {
                            std::cout << "No se que estas pensando" << std::endl;
                        }
                    }
                }
            }
        }
        cout << "quieres seguir jugando? " << endl;
        cout << "Presione 0 para salir, presione 1 para quedarse" << endl;
        cin >> ciclo;
    }while (ciclo == true);
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
