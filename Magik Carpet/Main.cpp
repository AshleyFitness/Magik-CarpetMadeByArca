#include "AnimationDuMenu.h"
#include "Menu.h"
#include "Personnage.h"
#include "Hailey.h"
#include "DialogueEtAutre.h"
#include "Aggresive Dog.h"
#include "Tyrell.h"
#include "NavaRobotFromSpace.h"
#include "Angel.h"
#include "Combat.h"
using namespace std;
HANDLE h6 = GetStdHandle(STD_OUTPUT_HANDLE);
int main(int argc, char* argv[])
{

	//===========================================MENU===========================
	Animation objOuverture;
	objOuverture.Opening();
	Menu objMenu;
	objMenu.ChooseOption(0);
	//============================================= END OF MENU=========================
	objOuverture.~Animation();
	objMenu.~Menu();
	
	DialogueEtAutre dialogue;
	dialogue.TexteNumero1();
	dialogue.TexteNumero2();

	
	cout << "FIGHT STARTED !" << endl;
	//=========================================== FIRST FIGHT===========
	DogFight();

	//===============================================END OF FIRST FIGHT
	//=================================TEXT NUMBER 3
	dialogue.TexteNumero3();
	//================================= END OF TEXT NUMBER 3
	//=====================================Second Fight 
	cout << "FIGHT STARTED !" << endl;
	NavaRobotFight();
	//====================================END OF SECOND FIGHT
	dialogue.TexteNumero4();
	CoolRabitFight();
	dialogue.TexteNumero5();
	RustyRobotFight();
	cout << "Thanks For Playing the demo :DDDD!!!!" << endl;
	cout << "(i should display something else but thanks anyway for playing the demo)!" << endl;
	system("pause");
	return 0;
}