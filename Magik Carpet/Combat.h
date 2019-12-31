#pragma once
#include "Hailey.h"
#include "Aggresive Dog.h"
#include "Tyrell.h"
#include "Angel.h"
#include "NavaRobotFromSpace.h"
#include "CoolRabit.h"
#include "RustyRobot.h"
#include <iostream>
#include <cstdlib>
HANDLE h11 = GetStdHandle(STD_OUTPUT_HANDLE);
Hailey perso("Hailey", 120, 0, 1, 0);

AggresiveDog Pitounette("Pitounette", 20, 0);
Tyrell tyrellnotwellick;

void DogFight()
{
	

	system("pause");
	//===========================================LOOP OF THE FIRST FIGHT===========
	while (perso.EstVivant() && Pitounette.EstVivant())
	{
		system("cls");
		perso.HPlifeLimit();
		perso.DrawingDogMenu();
		Pitounette.ShowLove();
		tyrellnotwellick.TellingThings();
		int choiceAction1 = 0;
		std::cout << "Your action : ";
		std::cin >> choiceAction1;
		if (choiceAction1 == 1)
		{
			perso.coupDePoing(Pitounette);
		}
		if (choiceAction1 == 2)
		{
			perso.Compliment(Pitounette);
		}
		if (choiceAction1 == 3)
		{
			perso.Joke(Pitounette);
		}
		if (choiceAction1 == 4)
		{
			std::cout << "HAHAHA WHAT DID YOU TRIED YOU TOUGH YOU COULD RUN LIKE THIS?! " << std::endl;
		}
		if (choiceAction1 == 5 && Pitounette.DogIsInLove())
		{
			SetConsoleTextAttribute(h11, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			std::cout << "You spared the ennemi " << std::endl;
			perso.Spare(Pitounette);
			SetConsoleTextAttribute(h11, FOREGROUND_RED | FOREGROUND_INTENSITY);
			std::cout << "[+]Bonus xp +200" << std::endl;
			SetConsoleTextAttribute(h11, NULL | FOREGROUND_INTENSITY);
			perso.GetXpCustom(200);
			perso.GetLove(5);
		}
		Pitounette.Mordre(perso);
		system("pause");
	}
	//====================================LOOP OF THE FIRST FIGHT========================
	//====================================TO SEE WHO WIN
	if (Pitounette.EstVivant())
	{
		std::cout << "Oh no you loosed!" << std::endl;
		exit(0);
		
	}
	if (perso.EstVivant())
	{
		PlaySound(TEXT("sound5.wav"), NULL, SND_SYNC);
		SetConsoleTextAttribute(h11, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << "GG you won the battle " << std::endl;
		SetConsoleTextAttribute(h11, FOREGROUND_RED | FOREGROUND_INTENSITY);
		perso.GetXpCustom(300);
		std::cout << "[+]XP +300" << std::endl;
		SetConsoleTextAttribute(h11, NULL | FOREGROUND_INTENSITY);
		perso.LevelUp();
		perso.afficherEtat2();
		Pitounette.~AggresiveDog();
		system("pause");
	}
	//====================================TO SEE WHO WIN
}
//Creating someObject
NavaRobot NavaRobotFromSpace("NavaRobot", 100, 0, 1500);
Angel Angel1("Angel", 100, 0, 0);
//Creating someObject
void NavaRobotFight()
{

	while (perso.EstVivant() && NavaRobotFromSpace.EstVivant())
	{
		system("cls");
		Angel1.ProtectAgainstNavaRobot(perso);
		perso.HPlifeLimit();
		perso.DrawingNavaRobotMenu();
		NavaRobotFromSpace.showLove2();
		tyrellnotwellick.TellingThings();
		int choiceAction2 = 0;


		std::cout << "Your action : ";
		std::cin >> choiceAction2;
		if (choiceAction2 == 1)
		{
			perso.coupDePoing(NavaRobotFromSpace);
		}
		if (choiceAction2 == 2)
		{
			perso.Compliment(NavaRobotFromSpace);
		}
		if (choiceAction2 == 3)
		{
			perso.Joke(NavaRobotFromSpace);
		}
		if (choiceAction2 == 4)
		{
			std::cout << "HAHAHA WHAT DID YOU TRIED YOU TOUGH YOU COULD RUN LIKE THIS?! " << std::endl;
		}
		if (choiceAction2 == 5 && NavaRobotFromSpace.NavaRobotIsInLove())
		{
			SetConsoleTextAttribute(h11, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			std::cout << "You spared the ennemi " << std::endl;
			perso.Spare(NavaRobotFromSpace);
			SetConsoleTextAttribute(h11, FOREGROUND_RED | FOREGROUND_INTENSITY);
			std::cout << "[+]Bonus xp +600" << std::endl;
			SetConsoleTextAttribute(h11, NULL | FOREGROUND_INTENSITY);
			perso.GetXpCustom(600);
		}


		NavaRobotFromSpace.NavaLaser(perso);
		NavaRobotFromSpace.NavaHealRegen();
		NavaRobotFromSpace.NavaOutOfEnergy();
		system("pause");
	}
	NavaRobotFromSpace.Explosion(perso);
	//================OUTSIDE THE LOOP
	if (NavaRobotFromSpace.EstVivant())
	{
		std::cout << "Oh no you loosed " << std::endl;
		exit(0);
	}

	
	if (perso.EstVivant())
	{
		PlaySound(TEXT("sound5.wav"), NULL, SND_SYNC);
		SetConsoleTextAttribute(h11, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << "GG you won the battle " << std::endl;
		SetConsoleTextAttribute(h11, FOREGROUND_RED | FOREGROUND_INTENSITY);
		perso.GetXpCustom(1000);
		std::cout << "[+]XP +1000" << std::endl;
		SetConsoleTextAttribute(h11, NULL | FOREGROUND_INTENSITY);
		perso.LevelUp();
		perso.afficherEtat2();
		NavaRobotFromSpace.~NavaRobot();
		system("pause");
	}
}


CoolRabit UwURabit("UWU RABIT", 40, 0);

void CoolRabitFight()
{
	while (perso.EstVivant() && UwURabit.EstVivant())
	{
		system("cls");
		
		perso.HPlifeLimit();
		perso.DrawingRabbitMenu();
		UwURabit.ShowLove3();
		tyrellnotwellick.TellingThings();
		int choiceAction3 = 0;


		std::cout << "Your action : ";
		std::cin >> choiceAction3;
		if (choiceAction3 == 1)
		{
			perso.coupDePoing(UwURabit);
		}
		if (choiceAction3 == 2)
		{
			perso.Compliment(UwURabit);
		}
		if (choiceAction3 == 3)
		{
			perso.Joke(UwURabit);
		}
		if (choiceAction3 == 4)
		{
			std::cout << "HAHAHA WHAT DID YOU TRIED YOU TOUGH YOU COULD RUN LIKE THIS?! " << std::endl;
		}
		if (choiceAction3 == 5 && UwURabit.CoolRabitIsInLove())
		{
			SetConsoleTextAttribute(h11, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			std::cout << "You spared the ennemi " << std::endl;
			perso.Spare(UwURabit);
			SetConsoleTextAttribute(h11, FOREGROUND_RED | FOREGROUND_INTENSITY);
			std::cout << "[+]Bonus xp +200" << std::endl;
			SetConsoleTextAttribute(h11, NULL | FOREGROUND_INTENSITY);
			perso.GetXpCustom(200);
		}


		UwURabit.SUPERMEGARABITFIST(perso);
		
		system("pause");
	}
	//================OUTSIDE THE LOOP
	if (UwURabit.EstVivant())
	{
		std::cout << "Oh no you loosed" << std::endl;
		exit(0);
	}


	if (perso.EstVivant())
	{
		PlaySound(TEXT("sound5.wav"), NULL, SND_SYNC);
		SetConsoleTextAttribute(h11, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << "GG you won the battle " << std::endl;
		SetConsoleTextAttribute(h11, FOREGROUND_RED | FOREGROUND_INTENSITY);
		perso.GetXpCustom(300);
		std::cout << "[+]XP +300" << std::endl;
		SetConsoleTextAttribute(h11, NULL | FOREGROUND_INTENSITY);
		perso.LevelUp();
		perso.afficherEtat2();
		UwURabit.~CoolRabit();
		system("pause");
	}
}
RustyRobot  rustRobot("Rusty Robot", 60, 0);
void RustyRobotFight()
{
	perso.ReceiveHP(70);
	while (perso.EstVivant() && rustRobot.EstVivant())
	{
		system("cls");

		perso.HPlifeLimit();
		perso.DrawingRustyRobot();
		rustRobot.ShowLove4();
		tyrellnotwellick.TellingThings();
		int choiceAction4 = 0;


		std::cout << "Your action : ";
		std::cin >> choiceAction4;
		if (choiceAction4 == 1)
		{
			perso.coupDePoing(rustRobot);
		}
		if (choiceAction4 == 2)
		{
			perso.Compliment(rustRobot);
		}
		if (choiceAction4 == 3)
		{
			perso.Joke(rustRobot);
		}
		if (choiceAction4 == 4)
		{
			std::cout << "HAHAHA WHAT DID YOU TRIED YOU TOUGH YOU COULD RUN LIKE THIS?! " << std::endl;
		}
		if (choiceAction4 == 5 && rustRobot.RustyRobotIsInLove())
		{
			SetConsoleTextAttribute(h11, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			std::cout << "You spared the ennemi " << std::endl;
			perso.Spare(rustRobot);
			SetConsoleTextAttribute(h11, FOREGROUND_RED | FOREGROUND_INTENSITY);
			std::cout << "[+]Bonus xp +700" << std::endl;
			SetConsoleTextAttribute(h11, NULL | FOREGROUND_INTENSITY);
			perso.GetXpCustom(700);
		}


		rustRobot.ListRustyRobotAttack(perso);

		system("pause");
	}
	//================OUTSIDE THE LOOP
	if (rustRobot.EstVivant())
	{
		std::cout << "Oh no you loosed" << std::endl;
		exit(0);
	}


	if (perso.EstVivant())
	{
		PlaySound(TEXT("sound5.wav"), NULL, SND_SYNC);
		SetConsoleTextAttribute(h11, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << "GG you won the battle " << std::endl;
		SetConsoleTextAttribute(h11, FOREGROUND_RED | FOREGROUND_INTENSITY);
		perso.GetXpCustom(1000);
		std::cout << "[+]XP +1000" << std::endl;
		SetConsoleTextAttribute(h11, NULL | FOREGROUND_INTENSITY);
		perso.LevelUp();
		perso.afficherEtat2();
		rustRobot.~RustyRobot();
		system("pause");
	}
}