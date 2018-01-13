#pragma once

#include "card.h"
#include <array>

constexpr int g_numberOfCards = 52;

class Deck
{
private:
	bool m_bIsShuffled;
	std::array<Card, g_numberOfCards> m_aCards;
public:
	Deck() : m_aCards{ }
	{
	}

	bool isShuffled() { return m_bIsShuffled; }
	void shuffle();
	void setCard(int index, Card &card);
	void print();
	void initialize();
	Card& getCard(int index) { return m_aCards[index]; }

};

