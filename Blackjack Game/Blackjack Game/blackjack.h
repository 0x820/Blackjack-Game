#pragma once

#include "card.h"
#include "deck.h"
#include "hand.h"
#include <cassert>


class Blackjack
{
public:
	enum eResult
	{
		WIN,
		DRAW,
		LOSE,
		MAX_RESULT
	};

private:
	Deck m_deck;
public:
	Blackjack() { }
	Blackjack(Deck &deck)
		: m_deck{ deck }
	{
		assert(m_deck.isShuffled());
	}

	eResult play();

	static int getCardValue(Card& card);
};
