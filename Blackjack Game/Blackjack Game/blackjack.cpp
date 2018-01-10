#include "game.h"
#include "blackjack.h"

int getCardValue(const Card &card)
{	
	switch (card.rank)
	{
	case RANK_2:		return 2;
	case RANK_3:		return 3;
	case RANK_4:		return 4;
	case RANK_5:		return 5;
	case RANK_6:		return 6;
	case RANK_7:		return 7;
	case RANK_8:		return 8;
	case RANK_9:		return 9;
	case RANK_10:		return 10;
	case RANK_J:		return 10;
	case RANK_Q:		return 10;
	case RANK_K:		return 10;
	case RANK_A:		return 11;
	default:		return -1;
	}
}

void printHand(const std::vector<Card> &hand)
{
	for(auto &card: hand)
    {
		printCard(card);
		std::cout << " ";
    }
}

int getScore(const std::vector<Card> &hand)
{
	int score = 0;

	for(auto &card: hand)
    {
		score += getCardValue(card);
    }

	return score;
}

int playBlackjack(std::array<Card, g_NumberOfCards> &deck)
{
	std::vector<Card> playerHand, dealerHand;
  
	Card *cardPtr = &deck[0];

	//dealer gets one card
	dealerHand.push_back(*cardPtr++);

	//player gets two cards
	playerHand.push_back(*cardPtr++);
	playerHand.push_back(*cardPtr++);

	//player goes first
	char option = 0;

	while(1)
	{
		printHand(playerHand);
		std::cout << "Your score so far is " << getScore(playerHand) <<
			".\nDo you wish to (h)it or (s)tand? : ";
      
		std::cin >> option;
    
		if(option != 'h' && option != 's')
			continue;
    
		if(option == 'h')
		{
			std::cout << "You've chosen to hit.\n";
			playerHand.push_back(*cardPtr++);
	  
			if(getScore(playerHand) > 21)
			{
				std::cout << "You went over the score of 21.\n";
				return GAME_LOSE; //player loses
			}
		}
		else 
		{
			std::cout << "You've chosen to stand.\n";
			break;
		}
    }

	//dealer's turn
	while (1) 
	{
		printHand(dealerHand);
		std::cout << "Dealer's score so far is " << getScore(dealerHand) << ".\n";
    
		if(getScore(dealerHand) < 17)
		{
			std::cout << "Dealer's chosen to hit.\n";
			dealerHand.push_back(*cardPtr++);
			
			if(getScore(dealerHand) > 21)
			{
				std::cout << "Dealer went over the score of 21.\n";
				return GAME_WIN; //player wins
			}
		}
		else
		{
			std::cout << "Dealer's chosen to stand.\n";
			break;
		}
	}

	std::cout << "Time to evaluate scores!\n";
  
	if(getScore(playerHand) > getScore(dealerHand))
		return GAME_WIN;
	else if(getScore(playerHand) < getScore(dealerHand))
		return GAME_LOSE;
	else
		return GAME_DRAW;
}
