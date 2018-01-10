#ifndef GUARD_GAME_H
#define GUARD_GAME_H

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

constexpr int g_NumberOfCards = 52;

enum CardSuit
{
	SUIT_CLUBS,
	SUIT_DIAMONDS,
	SUIT_HEARTS,
	SUIT_SPADES,
	MAX_SUIT
};

enum CardRank
{
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_J,
	RANK_Q,
	RANK_K,
	RANK_A,
	MAX_RANK
};

enum GameResult
{
	GAME_WIN,
	GAME_DRAW,
	GAME_LOSE,
	MAX_RESULT
};


struct Card
{
	CardRank rank;
	CardSuit suit;
};

void printCard(const Card &card);
int getRandomNumber(int min, int max);
void printDeck(const std::array<Card, g_NumberOfCards> &deck);
void swapCard(Card &a, Card &b);
void shuffleDeck(std::array<Card, g_NumberOfCards> &deck);
void initializeDeck(std::array<Card, g_NumberOfCards> &deck);

#endif
