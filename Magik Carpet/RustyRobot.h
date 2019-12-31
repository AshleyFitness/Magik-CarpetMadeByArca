#pragma once
#include "Personnage.h"
class  RustyRobot : public Personnage
{
public:
	RustyRobot(std::string nom,int vie,int love);
	~RustyRobot();
	void ListRustyRobotAttack(Personnage& cible);
	void ShowLove4() const;
	bool RustyRobotIsInLove();
};