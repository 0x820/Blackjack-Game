#include "deck.h"
#include "random.h"
#include <iostream>
#include <cassert>
#include <ctime>

void Deck::setCard(int index, Card &card)
{
	assert(index > 0 && index < g_numberOfCards);
	m_aCards[index] = card;
}

void Deck::shuffle()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();

	for (int i = 0; i < g_numberOfCards ; i++)
	{
		int random = getRandomNumber(0, g_numberOfCards - 1); //generate in range [0, 51] so that it matches array layout
		m_aCards[i].swapCard(m_aCards[random]); //swap cards
	}
	
	m_bIsShuffled = true;
}

void Deck::print()
{
	for (auto &card : m_aCards)
		card.print(); std::cout << " ";

	std::cout << std::endl;
}

void Deck::initialize()
{
	int index = 0;
	for (int suit = 0; suit < Card::MAX_SUIT; suit++)
	{
		for (int rank = 0; rank < Card::MAX_RANK; rank++)
		{
			m_aCards[index].setRank(static_cast<Card::eCardRank>(rank));
			m_aCards[index].setSuit(static_cast<Card::eCardSuit>(suit));
			index++;
		}
	}
}