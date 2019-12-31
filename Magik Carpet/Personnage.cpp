#include "Personnage.h"
using namespace std;

Personnage::Personnage(string nom,int vie,int love) : m_vie(vie),m_mana(100), m_nom(nom),m_love(love)
{

}
Personnage::~Personnage()
{

}
void Personnage::recevoirDegats(int degats)
{
	m_vie -= degats;
	if (m_vie < 0)
	{
		m_vie = 0;
	}
}
void Personnage::recevoirAmour(int amour)
{
	m_love += amour;
	if (m_love > 100)
	{
		m_love = 100;
	}
}
void Personnage::coupDePoing(Personnage& cible) const
{
	cible.recevoirDegats(10);
	//I know that was not the best idea to put this function here but heh i'm  a little bit stupid
	cout << "HALEY PUNCHED  THE ENNEMI" << endl;
}
bool Personnage::EstVivant()
{
	if (m_vie > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
void Personnage::afficherEtat()
{
	cout << m_nom << endl;
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
}
void Personnage::GetLove(int Kindness)
{
	m_love += Kindness;
}
void Personnage::ReceiveHP(int HP)
{
	m_vie += HP;

}