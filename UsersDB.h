#pragma once

#include<vector>

#include "User.h"

class UsersDB
{
private:
	std::vector<User> users;
private:
	UsersDB() = default;

	UsersDB(const UsersDB&) = delete;			
	UsersDB& operator=(const UsersDB&) = delete;
	UsersDB(UsersDB&&) = delete;
	UsersDB& operator=(UsersDB&&) = delete;
public:
	static UsersDB& instance();

	void addUser(const std::string& username, const std::string& password);
	User& login(const std::string& username, const std::string& password);
};

