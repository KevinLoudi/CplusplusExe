#pragma once

class Games
{
public:
	Games(void);
	virtual ~Games(void);
public:
	int PlayGames(int Category);
	unsigned int Gcd(unsigned int M, unsigned int N);
	void BuyGusses(int Money);
	int GetInput();
	void SalaryDecision();

private:
	void GuessGame();
	void CalcMethod1();
	void CalcMethod2(int Sales);
	void CalcMethod3(int Sales);
};
