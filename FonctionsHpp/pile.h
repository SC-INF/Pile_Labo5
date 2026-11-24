#ifndef PILE_HPP
#define PILE_HPP

#include <array>


// Déclaration de capacité ici, car elle doit accessible dans pile.cpp et main.cpp
const size_t CAPACITE = 20;

void pushPile(std::array<int, CAPACITE>& maPile, size_t& compteur, int valeur);

void popPile(size_t& compteur);

int topPile(const std::array<int, CAPACITE>& maPile, size_t compteur);

bool emptyPile(size_t compteur);
size_t sizePile(size_t compteur);
void clearPile(size_t& compteur);

void afficherPile(const std::array<int, CAPACITE>& maPile, size_t compteur);

#endif
