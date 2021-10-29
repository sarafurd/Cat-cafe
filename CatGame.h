#pragma once
#include "BoardGame.h"
class CatGame :  public BoardGame
{
public:
	// in a cat game the user can upgrade their account with tokens to 
	// buy special features
	void upgradeAccount(int numTokens);
private:
	int tokens;
};

