#include "card.h"
#include <iostream>

void Card::print()
{
	switch (m_rank)
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

	switch (m_suit)
	{
		case SUIT_CLUBS:	std::cout << "C";			break;
		case SUIT_DIAMONDS:	std::cout << "D";			break;
		case SUIT_HEARTS:	std::cout << "H";			break;
		case SUIT_SPADES:	std::cout << "S";			break;
		default:			std::cout << "printCard(): invalid suit.";
	}
}

void Card::swapCard(Card &b)
{
	Card temp = b;
	b = *this;
	*this = temp;
}
