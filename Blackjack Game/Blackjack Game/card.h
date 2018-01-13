#pragma once

class Card
{
public:
	enum eCardSuit
	{
		SUIT_CLUBS,
		SUIT_DIAMONDS,
		SUIT_HEARTS,
		SUIT_SPADES,
		MAX_SUIT
	};

	enum eCardRank
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

private: 
	eCardRank m_rank;
	eCardSuit m_suit;
	
public:
	Card() {}
	Card(eCardRank rank, eCardSuit suit)
		: m_rank{ rank }, m_suit{ suit }
	{
	}
	void print();
	void swapCard(Card &card);
	eCardRank getRank() { return m_rank; }
	eCardSuit getSuit() { return m_suit; }
	void setRank(eCardRank rank) { m_rank = rank; }
	void setSuit(eCardSuit suit) { m_suit = suit; }
};
