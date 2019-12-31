#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
class Personnage
{
public:

	Personnage(std::string nom,int vie,int love);
	~Personnage();
	void recevoirDegats(int degats);
	void coupDePoing(Personnage& cible) const;
	bool EstVivant();
	void recevoirAmour(int amour);
	void afficherEtat();
	void GetLove(int KindNess);
	void ReceiveHP(int HP);
protected:
	int m_vie;
	int m_mana;
	std::string m_nom;
	int m_love;
};