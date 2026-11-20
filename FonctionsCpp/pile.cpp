#include <iostream>
#include <array>
#include "./../FonctionsHpp/pile.h"
using namespace std;

void pushPile(int valeur, int &compteur, array<int,20> & maPile) {
    maPile.at(compteur) = valeur;
    compteur++;
}

int popPile(int &compteur, array<int,20> & maPile) {

    int valeurRetiree = maPile.at(compteur -1);
    maPile.at(compteur -1) = 0;
    compteur--;
    return valeurRetiree;
}

int topPile(int compteur, array<int,20> & maPile) {
    return maPile.at(compteur -1);
}

bool emptyPile(int compteur) {
    if (compteur == 0)
        return true;
    return false;
}

int sizePile(int compteur) {
    return compteur;
}

void clearPile(int &compteur) {
    compteur = 0;
}
