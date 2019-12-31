#include "Tyrell.h"
HANDLE h4 = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

Tyrell::Tyrell() {

}
Tyrell::~Tyrell() {

}
void Tyrell::TellingThings() const
{
	int hasard3 = rand() % 5;
	switch (hasard3)
	{
	case 0: {SetConsoleTextAttribute(h4, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "Tyrell : "; SetConsoleTextAttribute(h4, NULL | FOREGROUND_INTENSITY); cout << "AAAAAAAAAAAAA HELP ME SOMEONE SAVE ME !!!!" << endl; break; }
	case 1: {SetConsoleTextAttribute(h4, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "Tyrell : "; SetConsoleTextAttribute(h4, NULL | FOREGROUND_INTENSITY); cout << "Ummm we should run Haley don't you think? " << endl; break; }
	case 2: {SetConsoleTextAttribute(h4, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "Tyrell : "; SetConsoleTextAttribute(h4, NULL | FOREGROUND_INTENSITY); cout << "WHY ME NOT NOW I'M TOO YOUNG TO DIE  Waaaaa" << endl; break; }
	case 3: {SetConsoleTextAttribute(h4, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "Tyrell : "; SetConsoleTextAttribute(h4, NULL | FOREGROUND_INTENSITY); cout << "God please save us i beg you to save us " << endl; break; }
	case 4: {SetConsoleTextAttribute(h4, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "Tyrell : "; SetConsoleTextAttribute(h4, NULL | FOREGROUND_INTENSITY); cout << "HALEY I DONT WANT TO KNOW ANYTHING SAVE ME FROM THIS " << endl; break; }
	}
}