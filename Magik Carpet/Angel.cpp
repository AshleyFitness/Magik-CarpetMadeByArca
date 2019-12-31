#include "Angel.h"

using namespace std;
HANDLE h10 = GetStdHandle(STD_OUTPUT_HANDLE);
Angel::Angel(string nom,int vie,int love,int increment) : Personnage(nom,vie,love),m_increment(increment)
{

}
Angel::~Angel()
{

}
 void Angel::ProtectAgainstNavaRobot(Personnage &cible)
{
	 m_increment++;
	 if (m_increment == 4)
	 {
		 cible.ReceiveHP(39);
		 SetConsoleTextAttribute(h10, FOREGROUND_RED | FOREGROUND_INTENSITY);
		 cout << "[!]Something is trying to protect you but what ?" << endl;
		 SetConsoleTextAttribute(h10, NULL | FOREGROUND_INTENSITY);
		 m_increment = 0;

	 }
	}
