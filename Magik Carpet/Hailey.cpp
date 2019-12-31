#include "Hailey.h"

using namespace std;
HANDLE h9 = GetStdHandle(STD_OUTPUT_HANDLE);
Hailey::Hailey(string nom, int vie, int love, int level, int xp) : Personnage(nom, vie, love), m_level(level),m_xp(xp)
{
	
}
Hailey::~Hailey()
{

}
void Hailey::SummonTree(Personnage &cible) 
{
	m_mana -= 30;
	cout << "Hailey  JUST SUMMONED A TREE!?" << endl;
	cout << "the tree is falling on the opponent" << endl;
	int hasard = rand() % 10;

	switch (hasard)
	{
	case 0: {cible.recevoirDegats(40); break; }
	case 1: {cible.recevoirDegats(40); break; }
	case 2: {cible.recevoirDegats(40); break; }
	case 3: {cible.recevoirDegats(40); break; }
	case 4: {cible.recevoirDegats(40); break; }
	case 5: {cible.recevoirDegats(40); break; }
	case 6: { cout << "OH NO THE TREE FALL IN THE WRONG DIRECTION" << endl; break; }
	case 7: {cible.recevoirDegats(40); break; }
	case 8: {cible.recevoirDegats(40); break; }
	case 9: {cible.recevoirDegats(40); break; }

	}
}
void Hailey::Compliment(Personnage& cible) const
{
	int  hasard4 = rand() % 5;
	switch (hasard4)
	{
	case 0: {cout << "You told to the ennemi that he is brave " << endl; cible.recevoirAmour(2); break; }
	case 1: {cout << "You told to the ennemi that you can avoid fighting" << endl; cible.recevoirAmour(1); break; }
	case 2: {cout << "You told to the ennemi that inside of him there is an nice person " << endl; cible.recevoirAmour(2); break; }
	case 3: {cout << "You told to the ennemi that nobody is great as he is " << endl; cible.recevoirAmour(3); break; }
	case 4: {cout << "You told to the ennemi that your peaceful and don't search to fight " << endl; cible.recevoirAmour(1); break; }
	}
	cible.recevoirAmour(2);
}
void Hailey::Joke(Personnage& cible) const
{
	int hasard5 = rand() % 5;
	switch (hasard5)
	{
	case 0: {cout << "What did the bees said to the tree is been nice knowing you..." << endl; cible.recevoirAmour(0); break; }
	case 1: {cout << "One of the most wonderful things in life is to wake up and enjoy a cuddle with somebody; unless you are in prison." << endl; cible.recevoirAmour(1); break; }
	case 2: {cout << "I dreamed I was forced to eat a giant marshmallow. When I woke up, my pillow was gone." << endl; cible.recevoirAmour(1); break; }
	case 3: {cout << "I got another letter from this lawyer today. It said “Final Notice”. Good that he will not bother me anymore." << endl; cible.recevoirAmour(4); break; }
	case 4: {cout << "I managed to lose my rifle when I was in the army.I had to pay $855 to cover the loss.I’m starting to understand why a Navy captain always goes down with his ship." << endl; cible.recevoirAmour(3); break; }
	}
}
void Hailey::afficherEtat2() const
{
	cout << "Hailey(" << m_level << ")  Life : " << m_vie << "   Mana : " << m_mana << endl;
}
void Hailey::DrawingDogMenu() const
{
	if (m_level < 5)
	{
		cout << "-------------------------------------------------------------------------------------------------" << endl;
		cout << "|                   |    O                 O       |                                            |" << endl;
		cout << "|                -------------------------------------                                          |" << endl;
		cout << "|               ^^^^              ||              ^^^^                                          |" << endl;
		cout << "|               (([[                              ]]))                                          |" << endl;
		cout << "|                  [(____________________________)]                                             |" << endl;
		cout << "|                   |                            |                                              |" << endl;
		cout << "|                   |                            |                                              |" << endl;
		cout << "|                   |                            |                                              |" << endl;
		cout << "|                   |____________________________|                                              |" << endl;
		cout << "|                   /                           \\                                              |" << endl;
		cout << "|                  /                             \\                                             |" << endl;
		cout << "|                 /                               \\                                            |" << endl;
		cout << "|                /                                 \\                                           |" << endl;
		cout << "________________________________________________________________________________________________ " << endl;
		cout << "|                                   Dog Fight                                                   | " << endl;
		cout << "| 1) Punch                                                                                      |" << endl;
		cout << "| 2) Compliment                                                                                 |" << endl;
		cout << "| 3) Joke                                                                                       |" << endl;
		cout << "| 4) Try To run                                                                                 |" << endl;
		cout << "| 5) Spare                                                                                      |" << endl;
		cout << "|                                                                                               |" << endl;
		cout << "|===============================================================================================|" << endl;
		cout << "|                                  HALEY FIGHT MENU                                             |" << endl;
		cout << "|===============================================================================================|" << endl;
		cout << "|                                  Choose your action                                           |" << endl;
		cout << "|";
		afficherEtat2();
		cout << "                                                                                                 | " << endl;
		cout << "|_______________________________________________________________________________________________|| " << endl; 

	}
	
}
void Hailey::LevelUp()
{

	if (m_level == 1 && m_xp >= 1000)
	{
		m_level = 2;
		SetConsoleTextAttribute(h9, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "[!!]GG YOU LEVEL UP YOUR NOW LEVEL : " << m_level << endl;
		m_xp -= 1000;
		SetConsoleTextAttribute(h9, NULL | FOREGROUND_INTENSITY);
	}
	if (m_level == 2 && m_xp >= 2000)
	{
		m_level = 3;
		SetConsoleTextAttribute(h9, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "[!!] GG YOU LEVEL UP YOUR NOW LEVEL :  " << m_level << endl;
		m_xp -= 2000;
		SetConsoleTextAttribute(h9, NULL | FOREGROUND_INTENSITY);
	}
	if (m_level == 3 && m_xp >= 2800)
	{
		m_level = 4;
		SetConsoleTextAttribute(h9, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "[!!] GG YOU LEVEL UP YOUR NOW LEVEL : " << m_level << endl;
		m_xp -= 2800;
		SetConsoleTextAttribute(h9, NULL | FOREGROUND_INTENSITY);
	}
	if (m_level == 4 && m_xp >= 4000)
	{
		m_level = 5;
		SetConsoleTextAttribute(h9, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "[!!] GG YOU LEVEL UP YOUR NOW LEVEL :  " << m_level << endl;
		m_xp -= 4000;
		SetConsoleTextAttribute(h9, NULL | FOREGROUND_INTENSITY);
	}
	if (m_level == 1 && m_xp < 1000)
	{
		int xp1 = 1000;
		xp1 = xp1 -= m_xp;
		SetConsoleTextAttribute(h9, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "[?]You need " << xp1 << " xp until the level 2" << endl;
		SetConsoleTextAttribute(h9, NULL | FOREGROUND_INTENSITY);
	}
	if (m_level == 2 && m_xp < 2000)
	{
		int xp2 = 2000;
		xp2 = xp2 -= m_xp;
		SetConsoleTextAttribute(h9, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "[?]You need " << xp2 << " xp until the level 3" << endl;
		SetConsoleTextAttribute(h9, NULL | FOREGROUND_INTENSITY);
	}
	if (m_level == 3 && m_xp < 2800)
	{
		int xp3 = 2800;
		xp3 = xp3 -= m_xp;
		SetConsoleTextAttribute(h9, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "[?]You need " << xp3 << " xp until the level 4" << endl;
		SetConsoleTextAttribute(h9, NULL | FOREGROUND_INTENSITY);
	}
	if (m_level == 4 && m_xp < 4000)
	{
		int xp4 = 4000;
		xp4 = xp4 -= m_xp;
		SetConsoleTextAttribute(h9, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "[?]You need " << xp4 << " xp until the level 5" << endl;
		SetConsoleTextAttribute(h9, NULL | FOREGROUND_INTENSITY);
	}
}
void Hailey::Spare(Personnage& cible) const
{
	cible.recevoirDegats(9999);
}
void Hailey::GetXpCustom(int XP)
{
	m_xp += XP;
}
void Hailey::DrawingNavaRobotMenu() const
{
	SetConsoleTextAttribute(h9, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "|                              +++++++++++++++                                                  |" << endl;
	cout << "|                             /              \\                                                 |" << endl;
	cout << "|                            /     _=====_    \\                                                |" << endl;
	cout << "|                       *****|  =============  |*****                                           |" << endl;
	cout << "|                       &  []|  =           =  |[]  &                                           |" << endl;
	cout << "| X         X           &  []|     XXXXXX      |[]  &                                           |" << endl;
	cout << "| XX       XX           *****|    X      X     |*****                                           |" << endl;
	cout << "|  X       X                 |     XXXXXX      |                                                |" << endl;
	cout << "|  XXXXXXXXX                 ||||-----------||||                                                |" << endl;
	cout << "|      X                             |                                                          |" << endl;
	cout << "|      X          -----------------------------------------                                     |" << endl;
	cout << "|      XXXXXXXXXXX|                        | NavaShield | |                                     |" << endl;
	cout << "|                 |                         ____________  |XXXXXXXXXXXXXXXXXXX                  |" << endl;
	cout << "|                |_________________________________________|                 X                  |" << endl;
	cout << "|                /                                        \\             XXXXXXXXX              |" << endl;
	cout << "|               /                                          \\            X       X              |" << endl;
	cout << "|               |                                          |            XX       XX             |" << endl;
	cout << "|             xxxxx                                      xxxxx          X         X             |" << endl;
	cout << "|          xxxxxxxxxxx                               xxxxxxxxxxxx                               |" << endl;
	cout << "________________________________________________________________________________________________ " << endl;
	cout << "|                                NavaRobot From Space                                           | " << endl;
	cout << "| 1) Punch                                                                                      |" << endl;
	cout << "| 2) Compliment                                                                                 |" << endl;
	cout << "| 3) Joke                                                                                       |" << endl;
	cout << "| 4) Try To run                                                                                 |" << endl;
	cout << "| 5) Spare                                                                                      |" << endl;
	cout << "|                                                                                               |" << endl;
	cout << "|===============================================================================================|" << endl;
	cout << "|                                  HALEY FIGHT MENU                                             |" << endl;
	cout << "|===============================================================================================|" << endl;
	cout << "|                                  Choose your action                                           |" << endl;
	cout << "|";
	afficherEtat2();
	cout << "                                                                                                 | " << endl;
	cout << "|________________________________________________________________________________________________| " << endl;
	SetConsoleTextAttribute(h9, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
}
void Hailey::HPlifeLimit()
{
	if (m_level == 1)
	{
		if (m_vie > 120)
		{
			m_vie = 120;
		}
	}
	if (m_level == 2)
	{
		if (m_vie > 130)
		{
			m_vie = 130;
		}
	}
	if (m_level == 3)
	{
		if (m_vie > 140)
		{
			m_vie = 140;
		}
	}
	if (m_level == 4)
	{
		if (m_vie > 145)
		{
			m_vie = 145;
		}
	}
	if (m_level == 5)
	{
		if (m_vie > 165)
		{
			m_vie = 165;
		}
	}
}
void Hailey::DrawingRabbitMenu() const
{
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "|                        __  __                                                                 |" << endl;
	cout << "|                       |  ||  |                                                                |" << endl;
	cout << "|                  _____|__||__|___                                                             |" << endl;
	cout << "|                  |  UU  ||  UU  |                                                             |" << endl;
	cout << "|                  |      WW      |                                                             |" << endl;
	cout << "|                  |______________|                     _                                       |" << endl;
	cout << "|                  /              \\                   | |                                      |" << endl;
	cout << "|         --------/          UwU   \\                  | |                                      |" << endl;
	cout << "|         |  |    |                |-------------------| |______                                |" << endl;
	cout << "|         |  |    |                |                   |   ____|                                |" << endl;
	cout << "|         |  |    |                |-------------------| ______|                                |" << endl;
	cout << "|         |  -----|                |                   |-------|                                |" << endl;
	cout << "|         +-------/----------------\\                                                           |" << endl;
	cout << "|                /                  \\                                                          |" << endl;
	cout << "|                |------------------|                                                           |" << endl;
	cout << "|                |                  |                                                           |" << endl;
	cout << "|                |                  |                                                           |" << endl;
	cout << "|             XXXXXXX            XXXXXXX                                                        |" << endl;
	cout << "|             X  X  X            X  X  X                                                        |" << endl;
	cout << "________________________________________________________________________________________________ " << endl;
	cout << "|                                   Cool Rabit Fight                                            | " << endl;
	cout << "| 1) Punch                                                                                      |" << endl;
	cout << "| 2) Compliment                                                                                 |" << endl;
	cout << "| 3) Joke                                                                                       |" << endl;
	cout << "| 4) Try To run                                                                                 |" << endl;
	cout << "| 5) Spare                                                                                      |" << endl;
	cout << "|                                                                                               |" << endl;
	cout << "|===============================================================================================|" << endl;
	cout << "|                                  HALEY FIGHT MENU                                             |" << endl;
	cout << "|===============================================================================================|" << endl;
	cout << "|                                  Choose your action                                           |" << endl;
	cout << "|";
	afficherEtat2();
	cout << "                                                                                                 | " << endl;
	cout << "|________________________________________________________________________________________________| " << endl;
}
void Hailey::DrawingRustyRobot() const
{
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "|                                                                                               |" << endl;
	cout << "|                                    0000000000000000000                                        |" << endl;
	cout << "|                          0000000000                   000000000                               |" << endl;
	cout << "|                         0                                      0                              |" << endl;
	cout << "|                         0      oOo         **          oOo     0                              |" << endl;
	cout << "|           --------------0                 &&&&                 0------------------            |" << endl;
	cout << "|           |             0                  **                  0                 |            |" << endl;
	cout << "|           |             0                                      0                 |            |" << endl;
	cout << "|           |             0              |_________|      0000000                  |            |" << endl;
	cout << "|           |              0000000000                   0                          |            |" << endl;
	cout << "|           |                        0000000000000000000                           |            |" << endl;
	cout << "|        +++++++                      |      |        |                         ++++++          |" << endl;
	cout << "|       ++     ++                     | {+} {|} {+}   |                        ++    ++         |" << endl;
	cout << "|        +     +                      | +++__|__+++   |                         +    +          |" << endl;
	cout << "|                                     |      |        |                                         |" << endl;
	cout << "|                                     |---------------|                                         |" << endl;
	cout << "|                                          |     |                                              |" << endl;
	cout << "|                                         +|     |+                                             |" << endl;
	cout << "|                                        +__+   +__+                                            |" << endl;
	cout << "________________________________________________________________________________________________ " << endl;
	cout << "|                                   Rusty Robot Fight                                           | " << endl;
	cout << "| 1) Punch                                                                                      |" << endl;
	cout << "| 2) Compliment                                                                                 |" << endl;
	cout << "| 3) Joke                                                                                       |" << endl;
	cout << "| 4) Try To run                                                                                 |" << endl;
	cout << "| 5) Spare                                                                                      |" << endl;
	cout << "|                                                                                               |" << endl;
	cout << "|===============================================================================================|" << endl;
	cout << "|                                  HALEY FIGHT MENU                                             |" << endl;
	cout << "|===============================================================================================|" << endl;
	cout << "|                                  Choose your action                                           |" << endl;
	cout << "|";
	afficherEtat2();
	cout << "                                                                                                 | " << endl;
	cout << "|________________________________________________________________________________________________| " << endl;
}