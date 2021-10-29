#ifndef BoardGame_HEADER
#define BoardGame_HEADER
#include<iostream>
#include<vector>
#include<iterator>
#include<string>

class BoardGame {
public:
	void setupgame(int numofplayers, int playtime, std::string id);
	void setPlayers(int playerNum, std::string name);
	std::string getPlayers(int playerNum);
	std::string getID();
	int getPlayerTurn();
	int rollDice();
	void moveGamePiece(int playerNum, int resultOfRoll);
	int getPlayerLoc(int playerNum);
	void endTurn(int playerNum);
	int getWinner();
	void setupaccount(std::string email, std::string username,std::string password);
	std::string getuseraccount();
	void populateAvatars(std::vector<std::string>& avatars);
	void setupavatar(std::string Account);
	std::string getavatar();
	void populateITpeople(std::vector<std::string>& itnames);
	void setmessagebox(std::string Account);
	std::string getmessagebox();
	void askforhelp(std::string message);
	std::string getanswer();
	std::string optiontogethelper();
	std::string gethelper();
	std::string getoutofmessagebox();
	void populateRewards(std::vector<std::string>& rewards);
	void setupreward(std::string Winner);
	std::string getreward();
	std::string generateReport();
	std::string generateReport(std::string startDate);
	std::string generateReport(std::string startDate, std::string endDate);
	

private:
	int numOfPlayers;
	int playTime;
	std::string ID, Email, UserName,Password, Account, messagebox, answer,
		Message, optiontogethelp, optiontoleavemb, itperson, winner,rewards;
	int playerTurn;
	std::vector<int>playerLocs;
	std::vector<std::string>playerNames;
	std::vector<std::string>ITnames;
	std::vector<std::string>Rewards;
	std::vector<std::string>Avatars;
};

#endif

