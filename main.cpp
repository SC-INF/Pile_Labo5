#include <iostream>
#include <array>

using namespace  std;

int main() {

        const int capaciteArray{20};
        const int nbChoixMenu{10};
        int compteur = 0;
        array <int, capaciteArray> maPile{};
        array <string, nbChoixMenu> menuAffichage = {
                "Ce programme permet de manipuler une pile d'entiers.\n",
                "1 - Empiler",
                "2 - Dépiler",
                "3 - Consulter le sommet",
                "4 - Modifier l'élément au sommet",
                "5 - Vérifier si la pile est vide",
                "6 - Afficher le nombre de valeurs",
                "7 - Vider la pile",
                "8 - Afficher toute la pile",
                "0 - Quitter"
        };

        for (size_t i = 0; i < nbChoixMenu; i++) {
                cout << menuAffichage[i] << endl;
        }


        int saisieMenu{};
        do {
                cout << "Votre choix : ";
                cin >> saisieMenu;

                switch (saisieMenu) {
                        case 1:

                        break;

                        case 2:

                        break;

                        case 3:

                        break;

                        case 4:

                        break;

                        case 5:

                        break;

                        case 6:

                        break;

                        case 7:

                        break;

                        case 8:

                        break;
                }
        }while (saisieMenu != 0);


}