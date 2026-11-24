#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include "./../FonctionsHpp/pile.h"

using namespace std;

void pushPile(array<int, CAPACITE>& maPile, size_t& compteur, int valeur) {
    maPile.at(compteur) = valeur;
    compteur++;
}

void popPile(size_t& compteur) {
    // On ne décale rien et on n'efface rien : le contenu de la case ne change rien.
    compteur--;
}

int topPile(const array<int, CAPACITE>& maPile, size_t compteur) {

    return maPile.at(compteur - 1);
}

bool emptyPile(size_t compteur) {
    if (compteur == 0)
        return true;
    return false;
}

size_t sizePile(size_t compteur) {
    return compteur;
}

void clearPile(size_t& compteur) {
    compteur = 0;   // vider une pile déjà vide est autorisé
}

void afficherPile(const array<int, CAPACITE>& maPile, size_t compteur) {

    if (compteur == 1) {   //La valeur est la même au sommet et au fond.
        cout << "Sommet / Fond -> " << maPile.at(0) << endl;
        return;
    }

    size_t largeur = 0;
    for (size_t i = 0; i < compteur; i++) {
        largeur = max(largeur, to_string(maPile.at(i)).size());
        /*
         On garde la longeur du string numérique max pour le mettre ensuite dans la setw. Cela permet d'adapter l'affichage
         avec toutes les valeurs 1000 ou 10 ou 1000000 présentent dans la pile.
        */
    }
    for (size_t i = compteur - 1; i < maPile.size(); i--) {
        if (i == compteur - 1) {
            cout << "Sommet -> ";
        }
        else if (i == 0) {
            cout << "Fond   -> ";
        }
        else {
            cout << "          ";
        }
        cout << setw(static_cast<int>(largeur)) << maPile.at(i) << endl;
    }
}
