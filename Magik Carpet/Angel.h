#pragma once
#include "Personnage.h"

class Angel : public Personnage
{
public:
	Angel(std::string nom,int vie,int love,int increment);
	~Angel();
	void ProtectAgainstNavaRobot(Personnage& cible);

private:
	int m_increment;
};