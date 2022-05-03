// 22_03_22_Zap637_MiPrimerPrograma.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Este es mi primer programa y no se que hare.
//Manuel A. Serrano de Jesús

#include <iostream>
#include <string>


void holamundo() {
    /*std::cout << "The Arcana is the means by which all is revealed\n";
    int numero = 0;
    int num2;
    int resultado;
    std::cout << "Ingresa un dato por favor: \n";
    std::cin >> numero;
    std::cout << "Ingrese un segundo dato: \n";
    std::cin >> num2;

    resultado = numero + num2;
    std::cout << "Aqui esta el resultado: " << resultado << std::endl;*/
}

void variables_c() {
    int Numero;
    double doble;
    
    char letra;
    std::cin.ignore();
    printf("escribir letra tu: \n");
    scanf_s("%c", &letra);

    printf("Ingrese un numero");
    scanf_s("%d", &Numero);

    float decimal;

    printf("ingrese un decimal: ");
    scanf_s("%f", &decimal);

    printf("ingrese un decimal largo: ");
    scanf_s("%lf", &doble);
    
    /*std::string aaaw;

    printf("aaa: ");
        scanf_s("%s", % aaaw);*/

    
}

int main()
{
       std::string aaa;
       int num;
       float dec;
       double dou;
       char c[10];


   std::cout << "escribe un numero: \n";
   std::cin >> num;
   std::cout << "tu numero es: " << num << std::endl;
   
   std::cout << "escribe un decimal: \n";
   std::cin >> dec;
   std::cout << "tu numero es: " << dec << std::endl;

   std::cout << "escribe un decimal largo: \n";
   std::cin >> dou;
   std::cout << "tu numero es: " << dou << std::endl;


    

        std::cout << "Ingrese una letra: " << std::endl;
        std::cin >> c;
        std::cout << "Tu letra es: " << c << std::endl;


        std::cout << "Ingrese una palabra al azar" << std::endl;
        std::cin >> aaa;
        std::cout << "la palabra elegida fue: " << aaa << std::endl;

        variables_c();

}

