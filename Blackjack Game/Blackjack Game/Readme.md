# Project Layout

* card.h -> general purpose, reusable code related to a card object
* card.cpp -> card.h's implementation
* hand.h -> general purpose, reusable code related to a hand object (as in, a group - implemented through std::vector - of Cards)
* hand.cpp -> hand.h's implementation
* deck.h -> general purpose, reusable code related to a deck object (as in, a group - implemented through std::array - of Cards)
* deck.cpp -> deck.h's implementation
* random.h -> general purpose, reusable code that contains random-related code (right now just a ranged RNG)
* random.cpp -> random.h's implementation
* blackjack.h -> blackjack specific game logic and code
* blackjack.cpp -> blackjack.h's implementation
* main.cpp -> main entry point of the application, can possibly be used to play other card games such as poker, etc. in addition to blackjack.
