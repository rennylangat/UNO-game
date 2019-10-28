#ifndef _CARD_H_
#define _CARD_H_

#include<iostream>

enum COLOR{wild,green, yellow, red ,blue};

/**
Let us represent the cards in the stack
*/
class card
{
public:
	int number;
	COLOR color;

	bool operator == (card const & other) const;

	bool operator !=(card const & other) const;

	card();

	card(int num, COLOR col);

};
std::ostream & operator<<(std::ostream & out, card const & temp_card);


#endif // !_CARD_H_



#pragma once
