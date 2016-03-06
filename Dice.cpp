#include "Dice.h"
#include "cstdlib" 

class Dice
{
private:
	 
public:
	Dice(){
	};
	~Dice(){
	};

	int roll(){
		return (rand() % 6) + 1;
	}
};


