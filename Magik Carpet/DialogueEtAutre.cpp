#include "DialogueEtAutre.h"

using namespace std;
using namespace std::literals::chrono_literals;
HANDLE h3 = GetStdHandle(STD_OUTPUT_HANDLE);
DialogueEtAutre::DialogueEtAutre()
{

}
DialogueEtAutre::~DialogueEtAutre()
{

}
void DialogueEtAutre::TexteNumero1()
{
	SetConsoleTextAttribute(h3, FOREGROUND_RED | FOREGROUND_INTENSITY);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*****Haley House*****" << endl;
	PlaySound(TEXT("sound3.wav"), NULL, SND_SYNC);
	SetConsoleTextAttribute(h3, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Stranger : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "HEY!HEY!HEY! WAKE UP! I SAID WAKE UP!" << endl;
	this_thread::sleep_for(2s);
	SetConsoleTextAttribute(h3, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Stranger : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "GOSH IS SHE GOING TO RESPOND ME?! I MEAN I DON'T CARE IF SHE DONT WAKE UP IN TEN SECONDS I'M GOING TO USE BRUTE FORCE" << endl;
	this_thread::sleep_for(10s);
	SetConsoleTextAttribute(h3, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "??? : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Please leave our house,i beg you please" << endl;
	this_thread::sleep_for(2s);
	cout << "..." << endl;
	this_thread::sleep_for(2s);
	system("cls");
	SetConsoleTextAttribute(h3, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Mom : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Hey are you alright?  (yes/no) " << endl;
	string dialogue1;
	cin >> dialogue1;
	SetConsoleTextAttribute(h3, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Mom : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Oh yeah i've forgot that you never talk between if you want you can leave the house BUT DONT FORGET TO CALL ME SOMETIMES! " << endl;
	system("pause");
}
void DialogueEtAutre::TexteNumero2()
{
	system("cls");
	cout << "Haley is Now Ready For Adventure!" << endl;
	system("pause");
	cout << "Now go to adventure Haley!" << endl;
	system("pause");
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Yo Haley how's it going ? " << endl;
	this_thread::sleep_for(5s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Not very talkative like always..." << endl;
	this_thread::sleep_for(2s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "ummmm...Okay Did you know something fell from the sky alongside of my house do you want to come ? (yes/no) : ";
	string dialogue2;
	cin >> dialogue2;
	while (dialogue2 == "no")
	{
		SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "Tyrell : ";
		SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
		cout << "Awww...COME ON PLEASE TELL ME YES " << endl;
		cin >> dialogue2;
	}
	while (dialogue2 != "yes" && dialogue2 != "no")
	{
		SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "Tyrell : "; 
		SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
		cout << "Huh...What?" << endl;
		cin >> dialogue2;

	}
	if (dialogue2 == "yes")
	{
		SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "Tyrell : ";
		SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
		cout << "Yes thank you follow me ;)" << endl;
	}
	PlaySound(TEXT("sound4.wav"), NULL, SND_SYNC);
	
}
void DialogueEtAutre::TexteNumero3()
{
	system("cls");
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell :  ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Hum Haley  what did happened ? I mean seriously explain what happened now" << endl;
	this_thread::sleep_for(5s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << " ANSWER TO ME HALEY!!" << endl;
	this_thread::sleep_for(2s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Gosh...IT'S OKAY IT'S OKAY DON'T STRESS OUT...Okay then this time follow me " << endl;
	this_thread::sleep_for(2s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Here look at this :o" << endl;

	system("pause");
	system("cls");
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "......................................., , , , , , , , , , , , , , , , , , ******************////////////////////////(((((((((((((((((((((((((((((((((((((((((((((((((((((#######" << endl;
	cout << "............................................., , , , , , , , , , , , , , *******************///////////////////////((((((((((((((((((((((((((((((((((((((((((((((((((########" << endl;
	cout << "...........             ........................, , , , , , , , , , , , , *****************//////////////////////////(((((((((((((((((((((((((((((((((((((((((((((((((######" << endl;
	cout << ".....                      ....................., , , , , , , , , , , , ******************//////////////////////((((((((((((((((((((((((((((((((((((((((((((((((((((#####" << endl;
	cout << "..                            .................., , , , , , , , , , , *****************//////////////////////((((((((((((((((((((((((((((((((((((((((((((((((((((######" << endl;
	cout << "................, , , , , , , , , , , **************//////////////////////(((((((((((((((((((((((((((((((((((((((((((((((((((((((#######" << endl;
	cout << "................, , , , , , , , , , , ************//////////////////////(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((#########" << endl;
	cout << "... .                 ..............., , , , , , , , , , , *************/////////////////////(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((############" << endl;
		cout << "&&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%&%%%%%%%%%%%%%%%%%%&&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ## % %%%%%%%%%%%%###########(((((((((((((((((((((((((((################" << endl;
		cout << "&& &&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%&&%%%&&%%%%%%%%%%%%%%%%%############# % %%%&&&&%&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##########################################" << endl;
		cout << "&& &&&&&&&&&&&&&&&%%%%%%%%%&%&&%%%%&&&&@@@@&@& && &&%%&&&%%%%####### % # % %%##### % &&&&&&&&&&&&&&&&&&&&&%%####((((((((((((((((########### % %%%%%# % %################# % %%" << endl;
		cout << "&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&@@@@& && ###(### % #(((((//(#(#####(##%%%%%(#%%#%%%%%#%%%%&%%#(##(###########%######((((((##################%%%%%%%%%%%%%%%" << endl;
		cout << "&& &&&&&&&&&&%&&%%&&&%&&&&%%%#### % %# % ### % # % ((((////**/((#(((//((###((#(#%%#((//,*.**.....  *(/,**,///(///(((((((##%&&&&&%##(######(##(####(((###################" << endl;
		cout << "&& &@@% && &&&&&&&&&&&%&&&%%%%%/**/ / (## % %#(#(/*(/***/, .*, / % #(((((((/*/*//*.,///.,.,,., .  ,* ,.    ,***/ / (****/ (/ (((# % &%# % %# / ((# % %%###########(((############### % %" << endl;
		cout << "&&&@&&&&&&&&&&%%%%&&%& @#((****//*(%%(*/../***.../(((**(#####((((/..*(#(((((//. ,...****//(//(((#/##(*#(*//(*,...,***,,(#((##(##((########(####(#############%%%" << endl;
		cout << "&&@@@@& && &&&%&%%%%%%%%&%(*(, ,//,.,/,,,***/(((##(***(#####%##%(/#(#(##(##(((/(((//(((((###(##(#%%((#/##//(#/(((/(((*/(#/*#//(//*//(#(((#%####%%%%%%%#########%%%" << endl;
							cout << "&& @@@@@%%%&&&&%%%%%%%%%%%, ., / (, * (/ (######(*##((((.*(### % (##((###### % (###(#((/ (((((((/ . / ####(## % (####(% ###((, ((##(####(((/*. ,,////((##%###%%%%%%%%%%%##%%##%%" << endl;
							cout << "&&&@@@@&&&&&&%%%%%%&%%%%%%%,((/,((, ..*(####/,*,/((#((##(###((###%##((/((/#((/((/((((,***((/(#((#*((*(//(*(#((##(###%##((((/,.*,(/,,*/ / (## % %%%%%%%%## % # % %%# % %%%" << endl;
							cout << "&&&@@@@@& && &%%%%%%%%%%%%%%%%%**(#(##(((*(#, (#(, * (((#### * %%%#(#(#((((#####((#((/ (((////*/((/#(##//(%#/((/*(#(*(/,(#*#(##(((((,.,*,,,*,(/*(%%%%%#%%%%%%%%%%%%%%%%" << endl;
							cout << "&& &&@@@@& & %%%%%%%%%&&%%%%%%%%&&(% (/***####(/##%(*(#(###((#(((/##(((##((((##(#(//(#//,,**///(((*###(#(*/*(%(//(#(/######((((((**  . *,.*%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&& &&@@& && &&&%&%%%%%%%%%%%%%%%%%%%%%%&&&&%%###(/ #, #### % ###(#//#((####(((##(/(((//**,..  ,,,/*(((#(/######///(###(#########((((((*/**/.(%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&& &&@@& && %%%%%&%%%%%%%%%%%%%%%%%%%%%%%&&%%&%%##((((% #(###((((# * ((####(#((((/ #(*/*,..    ..***/##(((((((*(###((######((##(((##((((((% %%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&&&&@@@@& && &&&&&%%%%%%%%%%%%%%%%%%%%%%%&&&&&&/ ###(# % %**#(##(((###(/ (##((*((/ (*, *, , .      ., */*/###(//(///(((##(#%(*#%#####%#(((%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&&&&&&&&&&&&&&&%&%%%%%%%%%%&%%%%%%%%&&@@&&&&&@##%%%##%(*###(((##((//(((*(((,           .,*((/(((//*(,(####(#%%*/(% %# % / (% %#(% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&&&&&&&&&&%%%%&%&&&&%&&%%%%%%%%%%%%%%&&&&&&&&%%%%%%%&&%&&&&&%**/ (((## / ,///(/*.  ..,,*   ..,*(//((((/,//(/##*,%%%(%%%((##%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&&&&&&&&&&&&&&&&&&&&%&%%%%%%%%%%%%%%%%%%%%%%%%%%%&%&&%%&%%%&&&& (##((((*/ (/ ((//,  .***,/(///((###(//*.*/##(///#(/(%(%####(%%%&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&& &&&&&&&&&&&&&&&&%&%%%%%%%%%%%%%%%%%%%%%&%%%%%%%%%&%&&&&&%%%%%%&&&(#((((///*/**********//////(////*/((%##(*//(%##%#%%&&&&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&& &&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%&%%%%%&%%%%%&%%%&&&&#((# % %%%%%(/////////(/,.,**#%%%%%&&&%&&%&&&&%@&%%&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&& &&&&&%%&&&&%%%%&&&&&%&&&%%&&&%%%%%%%%%%%%%%%%%&%%%%%%&%%%%%%%%%%&&&&%%%%%%%%%%%%%&&&%# % %#(#(/ (# % %%%%%%%%%&%%%%&%&&@&@& % %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&&&&&&&%%%&&%%&%&%&&&&%&%&%%&%%%%%%%%&%%%%%%%%%&%%%%%%%%%%%&%%%%&&&&&%%%%%%%%%%%%%&&&&&&%%&%&%%%%%%%%%%%%%%%%%%%%%&&&@& % %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&%&&&%&&&&&&%&&&&&&%&%&%&&&&&%%%%%%%%%%%%%%%%%%&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%&&&&%%%%%%%%%%%%%%%%%%%%&%%%%%%&%%%%&&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&&&&&&&&&&&&&%&%%&%%%&&%&%&&%&%%%%&%%%%%%%%%%%%%%%%%%%%%&%%&%%%%&%%%%%%%%%%%%%%%%%%%%&&&&&%%%%%%%%%%%%%%%%%%%&%%%%%%&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%&" << endl;
							cout << "&&&@& & %%%%&&&&&%%%&%&%&&&%%%%%%%%%%%%%%%%%%%%%%%&&%%%%%%&%%%%%%%%%%%%%%%%%%%&%%%%%%%%%&%%&&%%%%%%%%%%%%%%%%%%%&&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
							cout << "&&&@@& && &&&@& && @& && &&@& && &&&&&&&&&&&&&%%%%&&&%&&&&&%&%&&&&&&&%&&&&&&&%&&&&&&&&&&&&&&&&&&&@& && &&&&&&&%&&&&&&&&&&&&&&&&&&&&&&%%%%&&&%%%%%%%%%&&&&&%&&%&&&&&&&&&&&" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
							cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
 
							system("pause");
							system("cls");
							SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
							cout << "Tyrell : ";
							SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
							cout << "This things just fell alongside of my house i mean...WAIT WAIT SOMETHING IS COMMING FROM THE METEORITE " << endl;
							this_thread::sleep_for(2s);
							SetConsoleTextAttribute(h3, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
							cout << "Haley : ";
							SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
							cout << "Hum wait... My mom is calling me." << endl;
							this_thread::sleep_for(3s);
							SetConsoleTextAttribute(h3, FOREGROUND_RED | FOREGROUND_INTENSITY);
							cout << "Mom : ";
							SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
							cout << "Um Haley are you okay  don't you need some help ? " << endl;
							this_thread::sleep_for(10s);
							SetConsoleTextAttribute(h3, FOREGROUND_RED | FOREGROUND_INTENSITY);
							cout << "Mom : ";
							SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
							cout << "well i see... call me if something bad happen okay? Bye!" << endl;
							this_thread::sleep_for(3s);
							SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
							cout << "Tyrell : ";
							SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
							cout << "AAAAAAAAAAAAAAA HELP ME HALEY THIS THINGS IS ATTACKING ME!!!" << endl;
							PlaySound(TEXT("sound4.wav"), NULL, SND_SYNC);
}

void DialogueEtAutre::TexteNumero4()
{
	system("cls");
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Okay Haley just let's get out from here RUN AS MUCH AS YOU CAN !!" << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL| FOREGROUND_INTENSITY);
	cout << "AAAAAAAAAAAAAAAAAAAAAAAAAA SOMETHING IS ATTACKING ME, HELP ME!!!" << endl;
	system("pause");
	PlaySound(TEXT("sound4.wav"), NULL, SND_SYNC);
}
void DialogueEtAutre::TexteNumero5()
{
	system("cls");
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "WHY WHEN I'M WITH YOU THERE IS ALWAYS SOMETHINGS ATTACKING ME IT'S ALL YOUR FAULT HALEY! IF I DIE YOU WILL BE THE KILLER" << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "I'M THE ONLY WHO DO SOMETHING HERE YOUR TOTALLY USELESS HALEY!" << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "IF I EVER JUST ONE,JUST ONE MONSTER IS ATTACKING ME I DON'T EVEN CARE I DONT EVEN HELP YOU " << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "NOW YOU CAN GET OUT !" << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Haley : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "if you say it... than i can finally go thanks for everything dude..." << endl;
	system("pause");
	this_thread::sleep_for(10s);
	system("cls");
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "HALEY,HALEY,HALEY COME HERE...." << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "I SAID COME HERE RIGHT NOW!!!" << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Haley : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << " huh...I tough i was useless...?" << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Tyrell : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "OF COURSE YOU ARE,YOUR NOTHING BUT JUST AN STUPID PERSON,NOW COME HELP ME!" << endl;
	this_thread::sleep_for(3s);
	SetConsoleTextAttribute(h3, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "Haley : ";
	SetConsoleTextAttribute(h3, NULL | FOREGROUND_INTENSITY);
	cout << "Here we go again..." << endl;
	PlaySound(TEXT("sound4.wav"), NULL, SND_SYNC);
	system("pause");
}