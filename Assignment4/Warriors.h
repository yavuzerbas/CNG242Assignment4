#pragma once
#include <iostream>
#include "Entities.h"

class Warriors : public Entities
{
protected:
	bool isDead;
	int lifePoints;
	int ammunitions;
	int shootTimes;
	int meleeDamage;
	int shootDamage;
public:
	Warriors(int lifePoints, int ammunitions, int shootTimes, int meleeDamage, int shootDamage) : Entities(1,'w') {
		isDead = false; //each player is alive at the beginning
		//using if else chains to avoid creating warriors with absurd properties
		if (lifePoints >= 0) {
			this->lifePoints = lifePoints;
		}else {
			this->lifePoints = 0;
			std::cout << "\nInvalid lifePoints! It is set to 0 as default!\n\n";
		}
		if (ammunitions >= 0) {
			this->ammunitions = ammunitions;
		}else {
			this->ammunitions = 0;
			std::cout << "\nInvalid ammunitions! It is set to 0 as default!\n\n";
		}
		if(shootTimes >= 0){
			this->shootTimes = shootTimes;
		}else {
			this->shootTimes = 0;
			std::cout << "\nInvalid shootTimes! It is set to 0 as default!\n\n";
		}
		if (meleeDamage >= 0) {
			this->meleeDamage = meleeDamage;
		}else {
			this->meleeDamage = 0;
			std::cout << "\nInvalid meleeDamege! It is set to 0 as default!\n\n";
		}
		if (shootDamage >= 0) {
			this->shootDamage = shootDamage;
		}else {
			this->shootDamage = 0;
			std::cout << "\nInvalid shootDamege! It is set to 0 as default!\n\n";
		}
	}
	float getSize() {
		return this->size;
	}
	void setSize(int size) {
		this->size = size;
	}
};

