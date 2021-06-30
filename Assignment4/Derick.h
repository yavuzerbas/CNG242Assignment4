#pragma once
#include "Warriors.h"
class Derick : public Warriors
{
public:
	Derick() : Warriors(100,30,2,1,5) {//100 lifepoints,30 amm.,2 times shooting,1 melee damage,5 shoot damage
	}//default Derick
	Derick(int lifePoints, int ammunitions, int shootTimes, int meleeDamage, int shootDamage) :
		Warriors(lifePoints, ammunitions, shootTimes, meleeDamage, shootDamage) {
	}//custom Derick

};

