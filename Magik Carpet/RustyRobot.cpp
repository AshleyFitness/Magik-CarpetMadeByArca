#include "RustyRobot.h"
using namespace std;
HANDLE h15 = GetStdHandle(STD_OUTPUT_HANDLE);
RustyRobot::RustyRobot(string nom, int vie, int love) : Personnage(nom, vie, love)
{

}
RustyRobot::~RustyRobot()
{

}
void RustyRobot::ListRustyRobotAttack(Personnage& cible)
{
	int AttackRandom = rand() % 6;
	switch (AttackRandom)
	{
	case 0: {SetConsoleTextAttribute(h15, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "The Rusty Robot is shooting an weak laser" << endl; cible.recevoirDegats(5); SetConsoleTextAttribute(h15, NULL | FOREGROUND_INTENSITY); break; }
	case 1: {SetConsoleTextAttribute(h15, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "The Rusty Robot is making an Mechanic Punch" << endl; cible.recevoirDegats(15); SetConsoleTextAttribute(h15, NULL | FOREGROUND_INTENSITY); break; }
	case 2: {SetConsoleTextAttribute(h15, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "The Rusty Robot is falling" << endl; SetConsoleTextAttribute(h15, NULL | FOREGROUND_INTENSITY); break; }
	case 3: {SetConsoleTextAttribute(h15, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "The Rusty Robot is making an Mechanic Punch " << endl; cible.recevoirDegats(30); cout << " CRITICAL HIT !!!" << endl; SetConsoleTextAttribute(h15, NULL | FOREGROUND_INTENSITY); break; }
	case 4: {SetConsoleTextAttribute(h15, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "The Rusty Robot is falling" << endl; SetConsoleTextAttribute(h15, NULL | FOREGROUND_INTENSITY); break; }
	case 5: {SetConsoleTextAttribute(h15, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "The Rusty Robot is shooting an weak laser" << endl; cible.recevoirDegats(5); SetConsoleTextAttribute(h15, NULL | FOREGROUND_INTENSITY); break; }
	}
}
void RustyRobot::ShowLove4() const
{
	cout << "Rusty Robot : " << m_love << "/30 to spare it" << endl;
}
bool RustyRobot::RustyRobotIsInLove()
{
	if (m_love >= 30)
	{
		return true;
	}
	else
	{
		return false;
	}
}