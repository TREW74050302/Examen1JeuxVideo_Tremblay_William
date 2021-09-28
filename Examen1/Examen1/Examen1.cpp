
#include <ctime>
#include <iostream>
#include "FactoryArme.h"
#include "Arme.h"
#include "Aventurier.h"
#include "Marchand.h"


int main()
{
    /*srand(time(NULL));
    std::cout << "Production une arme \n";
    Arme* arme = FactoryArme::getRandomArme();
    std::cout << arme->to_string();

    delete arme;*/

    int menu = 0;
    bool sortir;
    Aventurier* aventurier = new Aventurier();
    Marchand* marchand = new Marchand();

    std::cout << "Choisisez un menu" << std::endl;
    std::cout << "1- Aventurier" << std::endl;
    std::cout << "2- Armes dispo au marche" << std::endl;
    std::cout << "3- Acheter une arme" << std::endl;
    std::cout << "4- Equiper une armre" << std::endl;
    std::cout << "5- Quitter" << std::endl;

    std::cin >> menu;


    switch (menu)
    {
    case 1:
        std::cout << aventurier->to_string();
        break;
    case 2:
        marchand->getArmeShop();
        break;
    case 3:
        //aventurier->acheterArme();
        break;
    case 4:

        break;
    case 5:
        sortir = true;
    default:
        break;
    }
    
    delete aventurier;
    delete marchand;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
