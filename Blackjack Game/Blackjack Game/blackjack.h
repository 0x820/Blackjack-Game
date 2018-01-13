#pragma once

#include "card.h"
#include "deck.h"
#include "hand.h"


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
	}

	eResult play();

	static int getCardValue(Card& card);
};
