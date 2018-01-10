# Blackjack-Game
C++ implementation of a Blackjack game, assumes only 1 player vs dealer.

## Rules for this Simplified Version of Blackjack

* The dealer gets one card to start (in real life, the dealer gets two, but one is face down so it doesn’t matter at this point).
* The player gets two cards to start.
* The player goes first.
* A player can repeatedly “hit” or “stand”.
* If the player “stands”, their turn is over, and their score is calculated based on the cards they have been dealt.
* If the player “hits”, they get another card and the value of that card is added to their total score.
* An ace normally counts as a 1 or an 11 (whichever is better for the total score). For simplicity, we’ll count it as an 11 here.
* If the player goes over a score of 21, they bust and lose immediately.
* The dealer goes after the player.
* The dealer repeatedly draws until they reach a score of 17 or more, at which point they stand.
* If the dealer goes over a score of 21, they bust and the player wins immediately.
* Otherwise, if the player has a higher score than the dealer, the player wins. If the dealer has a higher score than the player, then the player loses. If both the dealer and the player have the same score, then it's a draw.

## Future Improvements
* Implement the same simplified game but with an OOP approach.
* Take account for scenario where aces can be counted as either 1 or 11.


### Special Thanks
Special thanks to Alex at [Learn Cpp](https://www.learncpp.com), it really is a fantastic resource and so much fun to practice there, he's the one that has this assignment as a "quiz" and has put it up on the website for people to practice.
