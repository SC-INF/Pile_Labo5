#include <iostream>
#include <array>
#include "./FonctionsHpp/pile.h"
using namespace  std;

int main() {

        const size_t nbChoixMenu{10};
        size_t compteur = 0;

        array<int, CAPACITE> maPile{};

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

        cout << menuAffichage[0] << endl;


        int saisieMenu{};
        int valeur{};
        do {
                // Menu affiché à chaque tour de boucle.
                for (size_t i = 1; i < nbChoixMenu; i++) {
                        cout << menuAffichage[i] << endl;
                }
                cout << endl;

                cout << "Votre choix : ";
                cin >> saisieMenu;


                switch (saisieMenu) {
                        case 1:
                                cout << "Valeur : ";
                                cin >> valeur;
                                pushPile(maPile, compteur, valeur);
                                cout << "Valeur empilée." << endl;
                        break;

                        case 2:
                                if (!emptyPile(compteur)) {
                                        valeur = topPile(maPile, compteur);
                                }
                                popPile(compteur);
                                cout << "Valeur retirée : " << valeur << endl;
                        break;

                        case 3:
                                cout << "Sommet : " << topPile(maPile, compteur) << endl;
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
                                cout << "Pile vidée." << endl;
                        break;

                        case 8:
                                afficherPile(maPile, compteur);
                        break;
                }
        }while (saisieMenu != 0);

        cout << "Fin de programme." << endl;

}