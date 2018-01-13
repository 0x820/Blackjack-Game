#include "blackjack.h"

int Blackjack::getCardValue(Card &card)
{
	switch (card.getRank())
	{
		case Card::RANK_2:		return 2;
		case Card::RANK_3:		return 3;
		case Card::RANK_4:		return 4;
		case Card::RANK_5:		return 5;
		case Card::RANK_6:		return 6;
		case Card::RANK_7:		return 7;
		case Card::RANK_8:		return 8;
		case Card::RANK_9:		return 9;
		case Card::RANK_10:		return 10;
		case Card::RANK_J:		return 10;
		case Card::RANK_Q:		return 10;
		case Card::RANK_K:		return 10;
		case Card::RANK_A:		return 11;
		default:			return -1;
	}
}

Blackjack::eResult Blackjack::play()
{
	Card *currentCard = &m_deck.getCard(0);
	
	//Create hands for all players involved
	Hand dealerHand, playerHand;

	//dealer gets one card
	dealerHand.addCard(*currentCard++);

	//player gets two cards
	playerHand.addCard(*currentCard++);
	playerHand.addCard(*currentCard++);

	//player goes first
	char option = 0;
	while (1)
	{
		std::cout << "Player hand: ";
		playerHand.print();
		std::cout << "Your score so far is " << playerHand.getValue() <<
			".\nDo you wish to (h)it or (s)tand? : ";

		std::cin >> option;

		if (option != 'h' && option != 's')
			continue;

		if (option == 'h')
		{
			std::cout << "You've chosen to hit.\n";
			playerHand.addCard(*currentCard++);

			if (playerHand.getValue() > 21)
			{
				std::cout << "You went over the score of 21.\n";
				return Blackjack::LOSE; //player loses
			}
		}
		else
		{
			std::cout << "You've chosen to stand.\n";
			break;
		}
	}

	//(opt) more players go?

	//dealer goes
	while (1)
	{
		std::cout << "Dealer hand: "; 
		dealerHand.print();
		std::cout << "Dealer's score so far is " << dealerHand.getValue() << ".\n";

		if (dealerHand.getValue() < 17)
		{
			std::cout << "Dealer's chosen to hit.\n";
			dealerHand.addCard(*currentCard++);

			if (dealerHand.getValue() > 21)
			{
				std::cout << "Dealer went over the score of 21.\n";
				return Blackjack::WIN; //player wins
			}
		}
		else
		{
			std::cout << "Dealer's chosen to stand.\n";
			break;
		}
	}

	//evaluate scores
	std::cout << "Time to evaluate scores!\n";

	eResult result;
	if (playerHand.getValue() > dealerHand.getValue())
		result = Blackjack::WIN;
	else if (playerHand.getValue() < dealerHand.getValue())
		result = Blackjack::LOSE;
	else
		result = Blackjack::DRAW;

	delete currentCard; //exception line - just debugging ? 
	currentCard = nullptr;

	return result;
}
