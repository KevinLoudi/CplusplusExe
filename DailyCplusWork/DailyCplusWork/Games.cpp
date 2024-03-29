#include "StdAfx.h"
#include "Games.h"
#include <iostream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

// constants which are used throughout the program
#define kPricePerUnit 225  // average price of a pair of shoes
#define kWeeklyWage 600    // current weekly wage - Method 1
#define kSalary 7.0        // hourly salary - Method 2
#define kHoursPerWeek 40    // number of hours worked - Method 2
#define kCommission2  0.10  // commission - Method 2
#define kCommission3 0.2    // commission - Method 3
#define kBonusPerUnit 20    // bonus  - Method 3

Games::Games(void)
{
}

Games::~Games(void)
{
}

int Games::PlayGames(int Category)
{
  if (Category==0)
  {
	  GuessGame();
  }

  return 0;
}

//Horses cost $10, pigs cost $3, and rabbits are only $0.50. A farmer buys 100 animals 
//for $100, How many of each animal did he buy?
void Games::BuyGusses(int Money)
{
	int x=0,y=0,z=0;
	int px=10,py=3,pz=0.5;

	for(x=0;x<=100;x++)
		for(y=0;y<=100;y++){
			for(z=0;z<=100;z++){
				if(x*px+y*py+z*pz==Money){
					printf("Horses: %d, Pigs: %d, rabbits: %d\n",x,y,z);
				}
			}	
		}
		return;
}

int Games::GetInput()
{
	int units;
	cout << "Enter number of units sold per week: ";
	if (!(cin >> units)) {
		cout << "Numbers only" << endl;
		return 0;
	} else {
		return units;
	}
}

void Games::SalaryDecision()
{
	int WeeklySales;    // our input variable

	WeeklySales = GetInput();
	if (WeeklySales == 0)
		return;
	CalcMethod1();
	CalcMethod2(WeeklySales);
	CalcMethod3(WeeklySales);
}

/*We will work on this game in three steps.  
Figure out how to generate a random number within a given range of values. 
Create a main function that processes one guess from the player, and provides hints. 
Add what we need to allow for multiple guesses until the player guesses the number.
*/
void Games::GuessGame()
{
	int iSecret, iGuess;

	/* initialize random seed: */
	srand (time(NULL));

	/* generate secret number between 1 and 10: */
	iSecret = rand() % 10 + 1;

	do {
		printf ("Guess the number (1 to 10): ");
		scanf ("%d",&iGuess);
		if (iSecret<iGuess) puts ("The secret number is lower");
		else if (iSecret>iGuess) puts ("The secret number is higher");
	} while (iSecret!=iGuess);

	puts ("Congratulations!");
	return;
}

void Games::CalcMethod2(int Sales)
{
	double PerHour, TotalPay, Commission;

	PerHour = kSalary * kHoursPerWeek;
	Commission = (Sales * kPricePerUnit) * kCommission2;
	TotalPay = PerHour + Commission;
	cout << "Method 2: " << TotalPay << endl;
}

void Games::CalcMethod3(int Sales)
{
	int Extra;
	double TotalPay, Commission;

	Extra = kBonusPerUnit * Sales;
	Commission = (Sales * kPricePerUnit) * kCommission3;
	TotalPay = Extra + Commission;
	cout << "Method 3: " <<  TotalPay << endl;
}

void Games::CalcMethod1()
{
    cout << "Method 1: " << kWeeklyWage << endl;
}

//Description: An implementation of Euclid's algorithm for computing gcd.
unsigned int Gcd(unsigned int M, unsigned int N){
  unsigned int Rem;
  while(N>0){
  	Rem=M%N;
  	M=N;
  	N=Rem;
  }
  return M;
}
