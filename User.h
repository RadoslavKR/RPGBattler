#pragma once

#include<string>

class User
{
private:
	static unsigned int FREE_ID;
private:
	unsigned int id;
	std::string username;
	std::string password;
	unsigned int totalXP;
	unsigned int unusedXP;
	//heroes
	//items
	unsigned int battlesPlayed;
	unsigned int battlesWon;
	unsigned int place;
public:
	User(const std::string& username, const std::string& password);

	User(const User&) = delete;
	User& operator=(const User&) = delete;

	bool checkCredentials(const std::string& username, const std::string password) const;
};

