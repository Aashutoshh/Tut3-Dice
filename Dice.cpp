#include "Dice.h"
#include "cstdlib" 
#include "iostream"

using namespace std;

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

class Dice{

public:
	Dice(){
	};
	~Dice(){
	};

	int roll(){
		return (rand() % 6) + 1;
	}
};

int main(){
	float average(Dice obj, int noOfRolls);
	//Dice a;
//	cout << "average with object "<< average(a, 10) ;
}
