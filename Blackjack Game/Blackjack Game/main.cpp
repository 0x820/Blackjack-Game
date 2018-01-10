#include "game.h"
#include "blackjack.h"

int main()
{
	std::array<Card, g_NumberOfCards> deck = { };
	
	initializeDeck(deck);
	shuffleDeck(deck);

	int result = playBlackjack(deck);

	if(result == GAME_WIN)
		std::cout << "You win!\n";
	else if(result == GAME_LOSE)
		std::cout << "You lose!\n";
	else
		std::cout << "You draw.\n";
  
	return 0;
}
