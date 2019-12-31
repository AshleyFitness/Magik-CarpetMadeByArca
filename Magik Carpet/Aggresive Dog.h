#pragma once
#include "Personnage.h"
#include <Windows.h>
class AggresiveDog : public Personnage
{
public:
	AggresiveDog(std::string nom, int vie,int love);
	void Mordre(Personnage& cible) const;
	~AggresiveDog();
	void ShowLove() const;
	bool DogIsInLove();
};