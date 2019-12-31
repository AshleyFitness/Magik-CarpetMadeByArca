#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <MMsystem.h>
class Menu
{
public:
	Menu();
	~Menu();
	void ChooseOption(int l_choice);
	void AboutTheGame() const;
	void SecretCode(std::string SUPERSECRETCODEOMG);
	std::string SUPERSECRETCODE = "DebugThisAndTheCodeWillBeShown";
	int Quit();
};