#pragma once
#include "Personnage.h"

class NavaRobot : public Personnage
{
public:
	NavaRobot(std::string nom, int vie, int love,int NavaEnergy);
	~NavaRobot();
	void NavaLaser(Personnage& cible);
	void NavaHealRegen();
	void showLove2() const;
	bool NavaRobotIsInLove();
	void NavaOutOfEnergy();
	void Explosion(Personnage &cible);
private:
	int m_NavaEnergy;
};