#ifndef PILE_HPP
#define PILE_HPP

#include <iostream>
#include <array>
using namespace std;

void pushPile(int valeur, int &compteur, array<int,20> & maPile);

int popPile(int &compteur, array<int,20> & maPile);

int topPile(int compteur, array<int,20> & maPile);

bool emptyPile(int compteur);

int sizePile(int compteur);

void clearPile(int &compteur);

#endif