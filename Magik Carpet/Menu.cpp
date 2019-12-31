#include "Menu.h"
using namespace std;
HANDLE h2 = GetStdHandle(STD_OUTPUT_HANDLE);
Menu::Menu()
{

}
Menu::~Menu()
{

}
void Menu::AboutTheGame() const
{
	SetConsoleTextAttribute(h2, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	system("cls");
	cout << "Well Hello This is an Message From the developper " << endl;
	cout << "this game was created during a contest" << endl;
	cout << "Hope you enjoy the game !" << endl;
	cout << "\n\n\n\n\n\nThe Developper : Arcadeur Tech" << endl;
	system("pause");
}
void Menu::SecretCode( std::string SUPERSECRETCODE)
{
	system("cls");
	SetConsoleTextAttribute(h2, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Here is an challenge ;)" << endl;
	cout << "Without looking in the source code of this game" << endl;
	cout << "There is an vulnerability in this program you can use Linux-GDB to debug this and try to find the secret code Good Luck!! " << endl;
	string attemptCode;
	cout << "If you found the code then juste type it here : " << endl;
	cin >> attemptCode;
	if (attemptCode == SUPERSECRETCODE)
	{
		system("cls");
		cout << "Wow your really good GG! ;) " << endl;
		cout << "Or you looked in the source code than your an cheater >:(" << endl;

		cout << "==========================================================================================" << endl;
		cout << "(if i'm not too lazy i will do something else than just this text)" << endl;
		system("pause");
	}
	if (attemptCode != SUPERSECRETCODE)
	{
		system("cls");
		cout << "Oops... Look like you were wrong (to be honest you can try as much as you can you need to debug this program to find the password)" << endl;
		system("pause");
	}
}
int Menu::Quit()
{
	system("cls");
	SetConsoleTextAttribute(h2, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Hehehe Than Goodbye !! :D (and have a Nice Day)" << endl;
	system("pause");
	exit(0);
}
void Menu::ChooseOption(int l_choice)
{
	
	bool boucler = true;
	while (boucler)
	{
		SetConsoleTextAttribute(h2, NULL | FOREGROUND_INTENSITY);
		system("cls");
		cout << "*****************Menu********************" << endl;
		cout << setfill(' ') << setw(2) << "1" << " : "<< setw(20) << "About The game" << endl; 
		cout << setfill(' ') << setw(2) << "2" << " : " << setw(20) << "Secret code ;)" << endl;
		cout << setfill(' ') << setw(2) << "3" << " : " << setw(20) << "Play Magik Carpet !" << endl;
		cout << setfill(' ') << setw(2) << "4" << " : " << setw(20) << "Quit" << endl;
		cout << "CHOOSE YOUR OPTION : " << endl;
		cin >> l_choice;
		while (l_choice < 1 || l_choice > 4)
		{
			cout << "Oops i think you type the wrong numper sorry ^^ " << endl;
			cout << "CHOOSE YOUR OPTION : " << endl;
			cin >> l_choice;
		}
		switch (l_choice)
		{
		case 1:
		{
			AboutTheGame();
			break;
		}
		case 2:
		{
			SecretCode(SUPERSECRETCODE);
			break;
		}
		case 3:
		{
			PlaySound(TEXT("sound2.wav"), NULL, SND_SYNC);
			boucler = false;
			break;
			//I'm just going to explain this we leave the while loop and in the main we will continue with the game
		}
		case 4:
		{
			Quit();
			break;
		}
		}

	}
}