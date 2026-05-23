#pragma once

#include "UsersDB.h"

enum class Pages {
	Exit,
	StartMenu,
	LoginMenu,
	RegisterMenu,
	MainMenu,
};

class GameController
{
private:
	Pages currentPage;
private:
	GameController();

	GameController(const GameController&) = delete;
	GameController& operator=(const GameController&) = delete;
	GameController(GameController&&) = delete;
	GameController& operator=(GameController&&) = delete;
public:
	static GameController& instance();

	Pages& getCurrentPage();
};

