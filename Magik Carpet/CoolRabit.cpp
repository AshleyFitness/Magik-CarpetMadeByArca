#include "CoolRabit.h"
using namespace std;
HANDLE h12 = GetStdHandle(STD_OUTPUT_HANDLE);
CoolRabit::CoolRabit(string nom, int vie, int love) : Personnage(nom, vie, love)
{

}
CoolRabit::~CoolRabit()
{

}
 void CoolRabit::SUPERMEGARABITFIST(Personnage& cible)
{
	 int FistRandom = rand() % 5;
	 switch (FistRandom)
	 {
	 case 0: {SetConsoleTextAttribute(h12, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "The Cool Rabit is punching you " << endl; cible.recevoirDegats(10); SetConsoleTextAttribute(h12, NULL | FOREGROUND_INTENSITY); break; }
	 case 1: {SetConsoleTextAttribute(h12, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "The Cool Rabit is doing nothing ?" << endl;  SetConsoleTextAttribute(h12, NULL | FOREGROUND_INTENSITY); break; }
	 case 2: {SetConsoleTextAttribute(h12, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "The Cool Rabit is doing nothing?" << endl; SetConsoleTextAttribute(h12, NULL | FOREGROUND_INTENSITY); break; }
	 case 3: {SetConsoleTextAttribute(h12, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "The Cool Rabit is punching you " << endl; cible.recevoirDegats(15); cout << "  CRITICAL HIT !!!" << endl; SetConsoleTextAttribute(h12, NULL | FOREGROUND_INTENSITY); break; }
	 case 4: {SetConsoleTextAttribute(h12, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "The Cool Rabit is doing nothing ?" << endl; SetConsoleTextAttribute(h12, NULL | FOREGROUND_INTENSITY); break; }
	 }
}
 void CoolRabit::ShowLove3() const
{
	 cout << "Cool Rabit : " << m_love << "/20 to spare it" << endl;
}
 bool CoolRabit::CoolRabitIsInLove()
 {
	 if (m_love >= 20)
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
 }