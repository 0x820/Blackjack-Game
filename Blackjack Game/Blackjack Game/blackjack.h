#ifndef GUARD_BLACKJACK_H
#define GUARD_BLACKJACK_H

#include <vector>

int getCardValue(const Card &card);
void printHand(const std::vector<Card> &hand);
int getScore(const std::vector<Card> &hand);
int playBlackjack(std::array<Card, g_NumberOfCards> &deck);

#endif
