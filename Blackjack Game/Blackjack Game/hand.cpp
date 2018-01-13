#include "hand.h"

int Hand::getValue()
{
	int score = 0;
	
	for (auto &card : m_vCards)
		score += Blackjack::getCardValue(card);
	
	return score;
}
