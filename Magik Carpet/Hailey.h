#pragma once
#include "Personnage.h"

class Hailey : public Personnage
{
public:
	void SummonTree(Personnage& cible);
	Hailey(std::string nom,int vie,int love,int level,int xp);
	~Hailey();
	void afficherEtat2() const;
	void Compliment(Personnage& cible) const;
	void Joke(Personnage& cible) const;
	void DrawingDogMenu() const;
	void LevelUp();
	void Spare(Personnage &cible) const;
	void GetXpCustom(int XP);
	void DrawingNavaRobotMenu() const;
	void HPlifeLimit();
	void DrawingRabbitMenu() const;
	void DrawingRustyRobot() const;
private:
	int m_level = 1;
	int m_xp = 0;
};