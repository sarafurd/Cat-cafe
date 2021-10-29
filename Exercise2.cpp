#include<iostream>
#include<string>
#include<vector>
#include "BoardGame.h"
#include "MouseGame.h"
#include "CatGame.h"


int main() {
	int diceroll, numofplayer = 2, minutes = 10,numtokens=9;
	std::string email, username, account,password, startdate, enddate, message, itperson, winner;
	std::vector<std::string>itnames;
	std::vector<std::string>avatars;
	std::vector<std::string>rewards;
	itnames.push_back("Rob");
	itnames.push_back("Steve");
	rewards.push_back("Coffee cup");
	rewards.push_back("Stuffed animal");
	rewards.push_back("T-shirt");
	rewards.push_back("Candy");
	rewards.push_back("Gift certificate");
	rewards.push_back("fidget spinner");
	avatars.push_back("Fuzzy Lumpkins");
	avatars.push_back("Mojo Jojo");

	MouseGame mousegame;// where I create the object
	// Use case 1: play game
	mousegame.setupgame(numofplayer, minutes, "fjdskjkdjgkd");//step 1
	mousegame.getID(); //step 1

	for (int i = 1; i <= numofplayer; i++) {
		mousegame.getPlayers(i);//step 1
		mousegame.setPlayers(i, avatars[i - 1]);//step 1
	}

	while (mousegame.getWinner() == 0)
	{
		std::cout << mousegame.getPlayers(mousegame.getPlayerTurn()) << "\n"; ;//step 1
		diceroll = mousegame.rollDice();//part of step 1
		mousegame.getPlayers(mousegame.getPlayerTurn());//step 1
		mousegame.moveGamePiece(mousegame.getPlayerTurn(), diceroll);//step 2
		mousegame.getPlayers(mousegame.getPlayerTurn());//step 2
		mousegame.getPlayerLoc(mousegame.getPlayerTurn());//step 2
		mousegame.endTurn(mousegame.getPlayerTurn());//step 2
	}

	winner = mousegame.getPlayers(mousegame.getWinner());//step 2
	//Use case 2: Create account
	mousegame.setupaccount(email, username,password);//step 1
	mousegame.populateAvatars(avatars);//step 1
	mousegame.setupavatar(account);//step 2
	mousegame.getavatar();//step 2
	//Use case 4: Technical support
	mousegame.setmessagebox(account);//step 1
	mousegame.getmessagebox();//step 1
	mousegame.askforhelp(message);//step 2
	mousegame.getanswer();//step 2
	mousegame.optiontogethelper();//step 3
	mousegame.populateITpeople(itnames);//part of step 3
	mousegame.gethelper();//step 3
	mousegame.getoutofmessagebox();//step 4
	//Use case 3: Reward winners
	mousegame.populateRewards(rewards);//part of step 1
	mousegame.setupreward(winner);//step 1
	mousegame.getreward();//step 1
	//Use case 5: Generate report
	mousegame.generateReport();//step 1
	mousegame.generateReport(startdate);//step 1
	mousegame.generateReport(startdate, enddate);//step 1

	mousegame.getSecondPlace();

	CatGame catgame; //where the object is being created 
	catgame.setupgame(numofplayer, minutes, "fjdskjkdjgkd");
	catgame.getID(); // 

	for (int i = 1; i <= numofplayer; i++) {
		catgame.getPlayers(i);
		catgame.setPlayers(i, avatars[i - 1]);
	}

	while (catgame.getWinner() == 0)
	{
		catgame.getPlayers(catgame.getPlayerTurn());
		diceroll = catgame.rollDice();
		catgame.getPlayers(catgame.getPlayerTurn());
		catgame.moveGamePiece(catgame.getPlayerTurn(), diceroll);
		catgame.getPlayers(catgame.getPlayerTurn());
		catgame.getPlayerLoc(catgame.getPlayerTurn());
		catgame.endTurn(catgame.getPlayerTurn());
	}

	winner = catgame.getPlayers(catgame.getWinner());
	catgame.setupaccount(email, username,password);
	catgame.populateAvatars(avatars);
	catgame.setupavatar(account);
	catgame.getavatar();
	catgame.setmessagebox(account);
	catgame.getmessagebox();
	catgame.askforhelp(message);
	catgame.getanswer();
	catgame.optiontogethelper();
	catgame.populateITpeople(itnames);
	catgame.gethelper();
	catgame.getoutofmessagebox();
	catgame.populateRewards(rewards);
	catgame.setupreward(winner);
	catgame.getreward();
	catgame.generateReport();
	catgame.generateReport(startdate);
	catgame.generateReport(startdate, enddate);

	catgame.upgradeAccount(numtokens);
	return 0;
}