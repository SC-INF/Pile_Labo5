#include <iostream>
#include <array>
#include "./FonctionsHpp/pile.h"
using namespace  std;

int main() {

        const int capaciteArray{20};
        const int nbChoixMenu{10};
        int compteur = 0;
        array <int, capaciteArray> maPile{};
        array <string, nbChoixMenu> menuAffichage = {
                "Ce programme permet de manipuler une pile d'entiers.\n",
                "1 - Empiler",
                "2 - Depiler",
                "3 - Consulter le sommet",
                "4 - Modifier l'element au sommet",
                "5 - Verifier si la pile est vide",
                "6 - Afficher le nombre de valeurs",
                "7 - Vider la pile",
                "8 - Afficher toute la pile",
                "0 - Quitter"
        };

        for (size_t i = 0; i < nbChoixMenu; i++) {
                cout << menuAffichage[i] << endl;
        }


        int saisieMenu{};
        int valeur{};
        do {
                cout << "Votre choix : ";
                cin >> saisieMenu;

                switch (saisieMenu) {
                        case 1:
                                cout << "Valeur : ";
                                cin >> valeur;
                                pushPile(valeur, compteur,maPile);
                                cout << "Valeur empilee" << endl;
                        break;

                        case 2:
                                cout << "Valeur retiree : " << popPile(compteur, maPile) << endl;
                        break;

                        case 3:
                                cout << "Sommet : " << topPile(compteur, maPile) << endl;
                        break;

                        case 4:

                        break;

                        case 5:
                                cout << (emptyPile(compteur) ? "La pile est vide." : "La pile n'est pas vide.") << endl;
                        break;

                        case 6:
                                cout << "Nombre de valeurs : " << sizePile(compteur) << endl;
                        break;

                        case 7:
                                clearPile(compteur);
                                cout << "Pile videe." << endl;
                        break;

                        case 8:

                        break;
                }
        }while (saisieMenu != 0);

        for (size_t i = compteur -1; i < maPile.size(); i--)
                cout << maPile.at(i) << endl;

}