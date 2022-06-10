// Zap637_08_06_22_Historia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int respuesta;
    int respuesta2;
    int respuesta3;
    int respuesta4;
    int respuesta5;
    int respuesta6;
    int respuesta7;
    int respuesta8;

    cout << "Amaneces en un dia normal, te levantas de la cama para ir a la escuela, que decides hacer: " << endl;
    cout << "Escriba 0 para no vestirse, desayunar e ir a la escuela\n" << "Escriba 1 para vestirse, desayunar e ir a la escuela\n";
    cin >> respuesta;
    switch (respuesta) {
    case 0:
        cout << "Decidiste no vestirte, sales de tu casa contento mientras todos se te quedan viendo\n" << endl;
        cout << "Llegas a la escuela pero el guardia no te deja entrar porque no estas vestido, Que haras? " << endl;
        cout << "Escribe 0 para pegarle un vergazo al guardia y entrar\n" << "Escribe 1 para regresarte a tu casa\n" << "Escribe 2 para llorar\n";
        cin >> respuesta2;
        switch (respuesta2) {
        case 0:
            cout << "Le diste un vergazo tan fuerte al guardia que lo dejas noqueado y entras\n" << "Vas hacia tu salon de clases cuando de repente vez una cabra\n";
            cout << "Decides pelear con la cabra por ver quien es mas salvaje\n";
            cout << "Elije 0 si le quieres meter un pollazo\n" << "Elije 1 para golpearlo con todas tus fuerzas\n" << "Elije 2 para montarla\n";
            cin >> respuesta3;
            switch (respuesta3) {
            case 0:
                cout << "Intentaste golpearlo de esa manera, pero la cabra hizo un backflip para esquivarlo haciendo que estuvieras vulnerable, te muerde y mueres\n";
                break;

            case 1:
                cout << "Golpeaste a la cabra tan fuerte que hizo que activara la bomba que tenia adentro, haciendo que ella y tu volaran por los aires..." << endl;
                cout << "...\n";
                cout << "...\n";
                cout << "Obviamente mueres";
                break;

            case 2:
                cout << "Decides montarte en la cabra y cabalgar, lo que hace que la cabra se ponga feliz, saliendo de la escuela" << endl;
                cout << "Una vez que salieron la cabra empieza a volar por los aires contigo arriba, te lleva a la tierra donde existen las cabras voladoras" << endl;
                cout << "Una vez en ese mundo ya no puedes salir..." << endl;
                cout << "Final feliz???";
                break;

            default:
                cout << "Escribe uno de los casos antes mencionados, cada vez que te equivoques pierdes un dedo" << endl;
            }
            break;

        case 1:
            cout << "Eliges regresarte a casa para no molestar a nadie\n" << "En el camino de vuelta vez como aparece un hombre lobo en la calle a medio dia Que haces? " << endl;
            cout << "Elige 0 para hacerte su amigo\n " << "Elige 1 para ignorarlo\n " << "Elige 2 para bailarte una cumbia" << endl;
            cin >> respuesta4;
            switch (respuesta4) {
            case 0:
                cout << "Te acercas al hombre lobo, le hablas y empiezan a platicar, terminas volviendote su mejor amigo" << endl;
                cout << "Al parecer el pertenece a una banda de metal y te invita a su concierto\n ";
                cout << "Final Feliz???";
                break;

            case 1:
                cout << "Eliges ignorar al hombre lobo\n" << "Al alejarte escuchas estruendos de lejos y decides buscar que es\n";
                cout << "Al acercarte vez que Autobots y Decepticons peleando y cuando volteas arriba vez que un deception va a caerte encima y te aplasta\n";
                cout << "Haz muerto...";
                break;

            case 2:
                cout << "Decides sacar el celular y poner un cumbion, el hombre lobo lo escucha y se acerca a ti\n";
                cout << "Los dos al tener el cumbion de fondo se ponen a bailarlo\n";
                cout << "Final Musical" << endl;
                cout << "Reproducir > https://www.youtube.com/watch?v=B_aQV6Q8700";
                break;

            default:
                cout << "Escribe uno de los casos anteriores maldita sea";
            }
            break;

        case 2:
            cout << "Decides acostarte y llorar\n" << "El guardia se acerca y te patea\n";
            cout << "Te enojas, Que haces?" << endl;
            cout << "Elije 0 para una batalla pokemon\n" << "Elije 1 para invocar un power ranger\n" << "Elije 2 para sacar un cangrejo con cuchillo\n";
            cin >> respuesta5;
            switch (respuesta5) {
            case 0:
                cout << "Empieza la batalla\n" << "---El guardia saca a su compañero policia--- \n" << "---Sacas a un tamagochi---\n";
                cout << "Tamagochi uso Vicio... \n" << "El ataque ah fallado\n";
                cout << "Policia uso RACISMO... \n" << "El ataque fue superefectivo\n" << "Tamagochi fue derrotado\n" << "Has perdido la batalla\n";
                cout << "GAME OVER...";
                break;

            case 1:
                cout << "Invocas al power ronger rojo\n" << "El power ranger rojo derrota al guardia usando varias volteretas y su ataque especial\n";
                cout << "Una vez derrotado, el power ranger llama al Megazord y destruye la escuela\n";
                cout << "Final Deseado???";
                break;

            case 2:
                cout << "Sacas al cangrejo con cuchillo y lo pones a pelear con el guardia\n" << "Cuando el guardia se distrae corres lejos de el abandonando al cangrejo\n";
                cout << "Una vez lo suficientemente lejos esperas a tu cangrejo\n" << "Cuando llega el cangrejo este te apuñala por no contarle tu plan y mueres desangrado\n";
                cout << "Final, Como le haces para ser apuñalado por un cangrejo?";
                break;

            default:
                cout << "Por favor elige uno de los casos anteriores mamawebo";
            }
            break;

        }
    case 1:
        cout << "Decides vestirte e ir a la escuela, cuando abres la puerta ves a un mono montando a un caballo pidiendo tu ayuda para llegar a la gema del tiempo\n";
        cout << "Escribe 0 para ayudarlo\n" << "Escribe 1 para ignorarlo\n";
        cin >> respuesta6;
        switch (respuesta6) {
        case 0:
            cout << "Elegiste ayudar al mono, lo que hizo que te enbarcaras en una epica aventura la cual llega a un punto donde encuentran una maquina del tiempo\n";
            cout << "El mono te dice que tu solo puedes entrar a la maquina y el la activara, a que era eliges ir?\n";
            cout << "Elige 0 para ir al pasado\n" << "Elige 1 para ir al futuro\n" << "Elige 2 para ir a 1942 ";
            cin >> respuesta7;
            switch (respuesta7) {
            case 0:
                cout << "Eliges ir al pasado, el mono prende la maquina y eres llevado a la era de los dinosaurios\n";
                cout << "como ser inteligente que eres terminas amaestrandolos a todos\n";
                cout << "terminas construyendo una arena para que pelien por tu entretenimiento\n";
                cout << "Final Romano...";
                break;
            case 1:
                cout << "Eliges ir al futuro, el mono prende la maquina y eres llevado a la era de las maquinas\n";
                cout << "Decides hacer una revolucion contra ellas haciendo que gente se una y te vuelvas su esperanza\n";
                cout << "terminas siendo atrapado por las maquinas y ejecutado haciendo que la guerra estaye por tu muerte\n";
                cout << "Final Rebelde...";
                break;
            case 2:
                cout << "Eliges ir a la segunda guerra mundial, el mono prende la maquina y apareces en Alemania\n";
                cout << "Al ser un viajero en el tiempo eres llevado a Hitler y terminan siendo amigos\n";
                cout << "Ayudas a Alemania a ganar la guerra haciendola la mayor potencia mundial\n";
                cout << "Final no se que poner sin que la gente me fune...☺\n";
                break;
            default:
                cout << "Escribe algo que corresponda";
            }
            break;
        case 1:
            cout << "Eliges ignorar al mono e irte a la escuela\n";
            cout << "A mitad de camino un cholo te quiere asaltar, Que haces?\n";
            cout << "Escribe 0 para darle tu dinero\n" << "Escribe 1 para pelear contra el\n";
            cin >> respuesta8;
            switch (respuesta8) {
            case 0:
                cout << "Le hiciste una finta de darle el dinero pero al final lo golpeaste y lo dejaste en el suelo\n";
                cout << "El ladron al ver lo que hiciste llama a sus amigos que son alien para secuestrarte y lo terminan haciendo\n";
                cout << "Terminas siendo llevado fuera del planeta por golpear a un ladron... Felicidades\n";
                cout << "Final, jaja no debi haber hecho eso";
                break;

            case 1:
                cout << "Decides retar a un duelo de Beyblade\n";
                cout << "El ladron le entra sacando su trompo y empieza el duelo\n";
                cout << "Pasado el tiempo ganas, te hechas un baile de la victoria y le robas su trompo\n";
                cout << "Victoria Royal";
                break;

            default:
                cout << "Por favor manito ponga algo que corresponda";
            }
        }
    default:
        cout << "Pon algo correspondiente a lo que se dijo anteriormente";
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
