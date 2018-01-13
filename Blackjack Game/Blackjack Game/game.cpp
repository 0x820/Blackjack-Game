#include "game.h"
//this change will only happen in oop branch
void printCard(const Card &card)
{
	switch (card.rank)
	{
	case RANK_2:		std::cout << "2";			break;
	case RANK_3:		std::cout << "3";			break;
	case RANK_4:		std::cout << "4";			break;
	case RANK_5:		std::cout << "5";			break;
	case RANK_6:		std::cout << "6";			break;
	case RANK_7:		std::cout << "7";			break;
	case RANK_8:		std::cout << "8";			break;
	case RANK_9:		std::cout << "9";			break;
	case RANK_10:		std::cout << "T";			break;
	case RANK_J:		std::cout << "J";			break;
	case RANK_Q:		std::cout << "Q";			break;
	case RANK_K:		std::cout << "K";			break;
	case RANK_A:		std::cout << "A";			break;
	default:			std::cout << "printCard(): invalid rank.";
	}

	switch (card.suit)
	{
	case SUIT_CLUBS:	std::cout << "C";			break;
	case SUIT_DIAMONDS:	std::cout << "D";			break;
	case SUIT_HEARTS:	std::cout << "H";			break;
	case SUIT_SPADES:	std::cout << "S";			break;
	default:			std::cout << "printCard(): invalid suit.";
	}
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}


void printDeck(const std::array<Card, g_NumberOfCards> &deck)
{
	for (auto &card : deck)
		printCard(card);
}

void swapCard(Card &a, Card &b)
{
	Card temp = b;
	b = a;
	a = temp;
}

void shuffleDeck(std::array<Card, g_NumberOfCards> &deck)
{
	//Seed number, and discard first result (VS compiler bug)
	srand(static_cast<unsigned int>(time(0)));
	rand();

	for (int i = 0; i < g_NumberOfCards; i++)
	{
		int random = getRandomNumber(0, g_NumberOfCards - 1); //generate in range [0, 51] so that it matches array layout
		swapCard(deck[i], deck[random]); //swap cards
	}
}

void initializeDeck(std::array<Card, g_NumberOfCards> &deck)
{
	int index = 0;
	for (int suit = SUIT_CLUBS; suit < MAX_SUIT; suit++)
	{
		for (int rank = RANK_2; rank < MAX_RANK; rank++)
		{
			deck[index].rank = static_cast<CardRank>(rank);
			deck[index].suit = static_cast<CardSuit>(suit);
			index++;
		}
	}
}
