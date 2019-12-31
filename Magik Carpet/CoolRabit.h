#pragma once
#include "Personnage.h"

class CoolRabit : public Personnage
{
public:
	CoolRabit(std::string nom,int vie,int love);
	~CoolRabit();
	void SUPERMEGARABITFIST(Personnage &cible);
	void ShowLove3() const;
	bool CoolRabitIsInLove();
};