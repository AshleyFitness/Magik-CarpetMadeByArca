#include "Aggresive Dog.h"
using namespace std; 
HANDLE h5 = GetStdHandle(STD_OUTPUT_HANDLE);
AggresiveDog::AggresiveDog(string nom, int vie, int love) : Personnage(nom, vie,love)
{
	
}
AggresiveDog::~AggresiveDog()
{

}
void AggresiveDog::Mordre(Personnage& cible) const
{
	cout << "Aggresive Dog is Ready to fight" << endl;
	int hasard2 = rand() % 4;
	switch (hasard2)
	{

	case 0: {SetConsoleTextAttribute(h5, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "The dog is biting you" << endl; cible.recevoirDegats(5); SetConsoleTextAttribute(h5, NULL | FOREGROUND_INTENSITY); break; }
	case 1: {SetConsoleTextAttribute(h5, FOREGROUND_RED | FOREGROUND_INTENSITY); cout << "The dog is biting you" << endl; cible.recevoirDegats(5); SetConsoleTextAttribute(h5, NULL | FOREGROUND_INTENSITY); break; }
	case 2: {SetConsoleTextAttribute(h5, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "The dog is watching somewhere ?" << endl; SetConsoleTextAttribute(h5, NULL | FOREGROUND_INTENSITY); break; }
	case 3: {SetConsoleTextAttribute(h5, FOREGROUND_RED | FOREGROUND_INTENSITY);cout << "The dog is biting you"; cible.recevoirDegats(10); cout << "CRITICAL HIT!!!" << endl; SetConsoleTextAttribute(h5, NULL | FOREGROUND_INTENSITY); break; }
	}
	}
void AggresiveDog::ShowLove() const
{

	cout << "Aggresive Dog : " << m_love << "/5 to spare it" << endl;
}
bool AggresiveDog::DogIsInLove()
{
	if (m_love >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}