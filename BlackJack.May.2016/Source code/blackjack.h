#ifndef BJ_BLACKJACK_H_
#define BJ_BLACKJACK_H_
#include "card.h"
#include "player.h"

#define MAX_DECK_SIZE 52
#define MAX_HAND_SIZE 10

namespace bj
{
	class blackjack {
		int deck[MAX_DECK_SIZE];
		int top;
		Player player_;
		card* card_[MAX_DECK_SIZE];//pointer array of card object
		card* house[MAX_HAND_SIZE];
		void shuffle();
		void push(int);
		int getdeck(int) const;
		card* pop();
		int menu();
		bool playerHasMoney();
		bool checkPlayerBet(int);
		
	public:
		blackjack();
		~blackjack();
		int run();


	};




}

#endif
