#include "Dice.h"
#include "cstdlib" 

float average(Dice obj,  int noOfRolls){
	float sum= 0.0;
	for ( int i = 0; i < noOfRolls; i++)
	{
		sum += obj.roll();
	}

	return sum / noOfRolls;
}


float average( int arr[], int noOfInt){
	float sum = 0.0;
	for (int i = 0; i < noOfInt; i++)
	{
		sum += arr[i];
	}
	return sum / noOfInt;
}

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


