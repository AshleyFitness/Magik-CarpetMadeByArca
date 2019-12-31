#include "AnimationDuMenu.h"
#include <Windows.h>
using namespace std;

using namespace std::literals::chrono_literals;
Animation::Animation()
{

}
Animation::~Animation()
{

}
void Animation::Opening() const
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Um Hello ?" << endl;
	this_thread::sleep_for(1s);
	cout << "Are you there ?" << endl;
	this_thread::sleep_for(1s);
	cout << "OF COURSE! YOU ARE " << endl;
	this_thread::sleep_for(1s);
	cout << "*COUGH COUGH*" << endl;
		this_thread::sleep_for(1s);
		cout << "WELCOME TO ..." << endl;
		this_thread::sleep_for(500ms);
		SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	cout << "                                                                                                                                " << endl;
	this_thread::sleep_for(500ms);
	cout << "          ____                                                                                                                  " << endl;
	this_thread::sleep_for(500ms);
	cout << "        ,'  , `.                                     ,-.           ,----..                                              ___     " << endl;
	this_thread::sleep_for(500ms);
	cout << "     ,-+-,.' _ |                        ,--,     ,--/ /|          /   /   \                     ,-.----.              ,--.'|_   " << endl;
	this_thread::sleep_for(500ms);
	cout << "  ,-+-. ;   , ||                      ,--.'|   ,--. :/ |         |   :     :             __  ,-.\    /  \             |  | :,'  " << endl;
	this_thread::sleep_for(500ms);
	cout << " ,--.'|'   |  ;|             ,----._,.|  |,    :  : ' /          .   |  ;. /           ,' ,'/ /||   :    |            :  : ' :  " << endl;
	this_thread::sleep_for(500ms);
	cout << "|   |  ,', |  ':  ,--.--.   /   /  ' /`--'_    |  '  /           .   ; /--`   ,--.--.  '  | |' ||   | .\ :   ,---.  .;__,'  /   " << endl;
	this_thread::sleep_for(500ms);
	cout << "|   | /  | |  || /       \ |   :     |,' ,'|   '  |  :           ;   | ;     /       \ |  |   ,'.   : |: |  /     \ |  |   |    " << endl;
	this_thread::sleep_for(500ms);
	cout << "'   | :  | :  |,.--.  .-. ||   | .\  .'  | |   |  |   \          |   : |    .--.  .-. |'  :  /  |   |  \ : /    /  |:__,'| :    " << endl;
	this_thread::sleep_for(500ms);
	cout << ";   . |  ; |--'  \__\/: . ..   ; ';  ||  | :   '  : |. \         .   | '___  \__\/: . .|  | '   |   : .  |.    ' / |  '  : |__  " << endl;
	this_thread::sleep_for(500ms);
	cout << "|   : |  | ,     ,\" .--.; | '   .   . |'  : | __ |  | ' \ \        '; : .'| ,\" .--.; |;  : |   :     |`-''   ;   /|  |  | '.'| " << endl;
	this_thread::sleep_for(500ms);
	cout << "|   : '  |/     /  /  ,.  | `---`-'| ||  | '.'|'  : |--'         '   | '/  :/  /  ,.  ||  , ;   :   : :   '   |  / |  ;  :    ; " << endl;
	this_thread::sleep_for(500ms);
	cout << ";   | |`-'     ;  :   .'   \.'__/\_: |;  :    ;;  |,'            |   :    /;  :   .'   \---'    |   | :   |   :    |  |  ,   /  " << endl;
	this_thread::sleep_for(500ms);
	cout << "|   ;/         |  ,     .-./|   :    :|  ,   / '--'               \   \ .' |  ,     .-./        `---'.|    \   \  /    ---`-'   " << endl;
	this_thread::sleep_for(500ms);
	cout << "'---'           `--`---'     \   \  /  ---`-'                      `---`    `--`---'              `---`     `----'        " << endl;
	this_thread::sleep_for(500ms);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "                              `--`-'                                                                                            " << endl;
	cout << "                                           " << endl;
	cout << "                                           " << endl;
	cout << "                       .---.               " << endl;
	cout << "        ,--,          /. ./|         ,--,  " << endl;
	cout << "       ,'_ /|      .--'.  ' ;       ,'_ /| " << endl;
	cout << "  .--. |  | :     /__./ \ : |  .--. |  | : " << endl;
	cout << ",'_ /| :  . | .--'.  '   \' .,'_ /| :  . | " << endl;
	cout << "|  ' | |  . ./___/ \ |    ' '|  ' | |  . . " << endl;
	cout << "|  | ' |  | |;   \  \;      :|  | ' |  | | " << endl;
	cout << ":  | | :  ' ; \   ;  `      |:  | | :  ' ; " << endl;
	cout << "|  ; ' |  | '  .   \    .\  ;|  ; ' |  | ' " << endl;
	cout << ":  | : ;  ; |   \   \   ' \ |:  | : ;  ; | " << endl;
	cout << "'  :  `--'   \   :   '  |--\" '  :  `--'   \ " << endl;
	cout << ":  ,      .-./    \   \ ;    :  ,      .-./ " << endl;
	cout << " `--`----'         '---\"      `- - `--- - '     " << endl;
	PlaySound(TEXT("sound1.wav"),NULL,SND_SYNC);

	SetConsoleTextAttribute(h, NULL | FOREGROUND_INTENSITY);
	system("pause");
}