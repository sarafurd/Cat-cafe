#include<string>
#include<ctime>
#include<cstdlib>
#include "BoardGame.h"

void BoardGame::setupgame(int numofplayers, int playtime, std::string id) {
	playerTurn = 1;
	numOfPlayers = numofplayers;
	playTime = playtime;
	ID = id;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < numofplayers; i++)
	{
		playerLocs.push_back(1);
		Avatars.push_back("Player " + std::to_string(i + 1));
	}
}

void BoardGame::setPlayers(int playerNum, std::string name) {
	Avatars[playerNum - 1] = name;
}

std::string BoardGame::getPlayers(int playerNum) {
	return Avatars[playerNum - 1];
}

std::string BoardGame::getID() {
	return ID;
}

int BoardGame::getPlayerLoc(int playerNum) {
	return playerLocs[playerNum - 1];
}

int BoardGame::getPlayerTurn()
{
	return playerTurn;
}

int BoardGame::rollDice()
{
	return rand() % 11 + 2;
}
void BoardGame::moveGamePiece(int playerNum, int resultOfRoll)
{
	if (playerNum == playerTurn)
	{
		playerLocs[playerNum - 1] += resultOfRoll;
	}
}
void BoardGame::endTurn(int playerNum)
{
	if (playerNum == playerTurn)
	{
		playerTurn += 1;
		if (playerTurn > numOfPlayers)
		{
			playerTurn = 1;
		}
	}

}

int BoardGame::getWinner()
{
	for (int i = 0; i < numOfPlayers; i++)
	{
		if (playerLocs[i] >= 45)
		{
			return i + 1;
		}
	}
	return 0; //this means no winner yet, keep playing game
}

void BoardGame::setupaccount(std::string email, std::string username, std::string password) {
	Email = email;
	UserName = username;
	Password = password;
}

std::string BoardGame::getuseraccount() {
	return Account;
}

void BoardGame::populateAvatars(std::vector<std::string>& avatars) {
	std::vector<std::string>::iterator iter;
	for (iter = avatars.begin(); iter != avatars.end(); iter++) {
		Avatars.push_back(*iter);
	}
}

void BoardGame::setupavatar(std::string account) {
	Account = account;
}

std::string BoardGame::getavatar() {
	return Avatars[rand() % Avatars.size()];
}
void BoardGame::populateITpeople(std::vector<std::string>& itnames)
{
	std::vector<std::string>::iterator iter;
	for (iter = itnames.begin(); iter != itnames.end(); iter++) {
		ITnames.push_back(*iter);
	}
}
void BoardGame::setmessagebox(std::string account) {
	Account = account;
}
std::string BoardGame::getmessagebox() {
	return messagebox;
}

void BoardGame::askforhelp(std::string message) {
	Message = message;
}

std::string BoardGame::getanswer() {
	return answer;
}

std::string BoardGame::optiontogethelper() {
	return optiontogethelp;
}

std::string BoardGame::gethelper() {
	return ITnames[rand() % ITnames.size()];
}

std::string BoardGame::getoutofmessagebox() {
	return optiontoleavemb;
}

void BoardGame::populateRewards(std::vector<std::string>& rewards)
{
	std::vector<std::string>::iterator iter;
	for (iter = rewards.begin(); iter != rewards.end(); iter++) {
		Rewards.push_back(*iter);
	}
}
void BoardGame::setupreward(std::string Winner) {
	winner = Winner;
}
std::string BoardGame::getreward() {
	std::vector<std::string>::iterator iter;
	for (iter = Avatars.begin(); iter != Avatars.end(); iter++) {
		if (*iter == winner) {
			rewards = Rewards[rand() % Rewards.size()];
		}
	}
	return rewards;
}

std::string BoardGame::generateReport() {
	return "This is a report of all the moves";
}
std::string BoardGame::generateReport(std::string startDate)
{
	return "This is a report from startDate to now";
}
std::string BoardGame::generateReport(std::string startDate, std::string endDate)
{
	return "This is a report from startDate to endDate";
}




