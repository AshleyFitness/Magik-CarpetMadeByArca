#include "NavaRobotFromSpace.h"
using namespace std;
HANDLE h7 = GetStdHandle(STD_OUTPUT_HANDLE);
NavaRobot::NavaRobot(std::string nom, int vie, int love, int NavaEnergy) : Personnage(nom, vie, love), m_NavaEnergy(NavaEnergy)
{

}
NavaRobot::~NavaRobot()
{

}
void NavaRobot::NavaLaser(Personnage& cible)	
{
	m_NavaEnergy -= 100;
	int laserRandom = rand() % 5;
	switch (laserRandom)
	{
	case 0: {SetConsoleTextAttribute(h7, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "Nava Robot is shooting an laser" << endl; cible.recevoirDegats(20); SetConsoleTextAttribute(h7, NULL | FOREGROUND_INTENSITY); break; }
	case 1: {SetConsoleTextAttribute(h7, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "Nava Robot is shooting an laser" << endl; cible.recevoirDegats(20); SetConsoleTextAttribute(h7, NULL | FOREGROUND_INTENSITY); break; }
	case 2: {SetConsoleTextAttribute(h7, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "Nava Robot Failed to shoot an laser" << endl; SetConsoleTextAttribute(h7, NULL | FOREGROUND_INTENSITY); break; }
	case 3: {SetConsoleTextAttribute(h7, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "Nava Robot is shooting an laser " << endl; cible.recevoirDegats(30); cout << "CRITICAL HIT !!!" << endl; SetConsoleTextAttribute(h7, NULL | FOREGROUND_INTENSITY); break; }
	case 4: {SetConsoleTextAttribute(h7, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "Nava Robot Failed to shoot an laser" << endl; SetConsoleTextAttribute(h7, NULL | FOREGROUND_INTENSITY); break; }
	}
}
void NavaRobot::NavaOutOfEnergy()
{
	if (m_NavaEnergy <= 0)
	{
		m_NavaEnergy = 0;
		m_vie = 0;
	}
}
void NavaRobot::Explosion(Personnage& cible)
{
	
		SetConsoleTextAttribute(h7, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "*************************EXPLOSION****************************" << endl;
		cible.recevoirDegats(40);
		SetConsoleTextAttribute(h7, NULL | FOREGROUND_INTENSITY);
	
}
void NavaRobot::NavaHealRegen()
{
	int HealRandom = rand() % 10;
	switch (HealRandom)
	{
	case 0: {}
	case 1: {}
	case 2: {}
	case 3: {}
	case 4: {}
	case 5: {m_vie += 1000; SetConsoleTextAttribute(h7, FOREGROUND_GREEN | FOREGROUND_INTENSITY); cout << "OH NO THE NAVA ROBOT REGEN HIS LIFE" << endl; SetConsoleTextAttribute(h7, NULL | FOREGROUND_INTENSITY); break; }
	case 6: {}
	case 7: {}
	case 8: {}
	case 9: {}
 }
}
void NavaRobot::showLove2() const
{
	cout << "Nava Robot From Space : " << m_love << "/40 to spare it" << endl;
	cout << "Nava Energy : " << m_NavaEnergy << "/1500" << endl;
}
bool NavaRobot::NavaRobotIsInLove()
{
	if (m_love >= 40)
	{
		return true;
	}
	else
	{
		return false;
	}
}