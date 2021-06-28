#pragma once
#include "Warriors.h"
class Chichonne : public Warriors
{
private:
	bool isCatanaMega; //if catana is levelled up, melee damage will be 6
public:
	Chichonne() : Warriors(100,25,1,4,5) {//100 lifepoints,25 amm.,1 time shooting,4 melee damage,5 shoot damage
		this->isCatanaMega = false;
	}//default Chichonne
	Chichonne(int lifePoints, int ammunitions, int shootTimes, int meleeDamage, int shootDamage) :
		Warriors(lifePoints, ammunitions, shootTimes, meleeDamage, shootDamage) {
		this->isCatanaMega = false;
	}//custom Chichonne

};

