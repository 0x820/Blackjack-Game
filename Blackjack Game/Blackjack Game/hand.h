#pragma once

#include "card.h"
#include "blackjack.h"
#include <iostream>
#include <vector>

class Hand
{
private:
	std::vector<Card> m_vCards;
public:
	Hand() {}
	Card& getCard(int index) { return m_vCards[index]; }
	void addCard(const Card &card) { m_vCards.push_back(card); }
	void changeCard(const Card &card, int index) { m_vCards[index] = card; }
	int getValue();
	void print()
	{
		for (auto &card : m_vCards) {
			card.print(); 
			std::cout << " ";
		}

		std::cout << std::endl;
	}
};