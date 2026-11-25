#include <iostream>
#include <array>
#include "./FonctionsHpp/pile.h"
using namespace  std;

int main() {

        const size_t nbChoixMenu{10}; //La taille du menu.
        size_t compteur = 0; //Déclaration d'un size_t car comme vu en théorie tous les compteurs sont en size_t.

        array<int, CAPACITE> maPile{}; //Capacité est déclarer dans le .h en const.

        array <string, nbChoixMenu> menuAffichage = { //Stockage du menu dans un tableau de string.
                "Ce programme permet de manipuler une pile d'entiers.",
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

        cout << menuAffichage[0] << endl << endl;


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

                try {
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
                                        cout << "Valeur de remplacement : ";
                                        cin >> valeur;
                                        topPile(maPile, compteur) = valeur;
                                        cout << "Valeur remplacée." << endl;
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
                }
                catch (const exception& erreur) {
                        cout << "Erreur : " << erreur.what() << endl;
                }
        }while (saisieMenu != 0);

        cout << "Fin de programme." << endl;

}