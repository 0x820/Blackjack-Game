#include "blackjack.h"

int main()
{
	Deck deck;
	deck.initialize();
	deck.shuffle();

	Blackjack *game = new Blackjack(deck);

	Blackjack::eResult result = game->play();

	if (result == Blackjack::WIN)
	{
		std::cout << "You win!\n";
	}
	else if (result == Blackjack::LOSE)
	{
		std::cout << "You lose!\n";
	}
	else
		std::cout << "You draw.\n";
	
	delete game;
	game = nullptr;
	return 0;
}
