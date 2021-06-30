#pragma once
#include <iostream>
#include "Entities.h"
using std::cout;
using std::cin;
class Grid : public Entities
{
private:
	int edgeLength;
public:
	Grid(int edgeLength) : Entities(edgeLength* edgeLength*9,'g') { //each square of a grid will be 3x3 and there will be edgeLength^2 squares so size is edgeLength* edgeLength * 9

	}
	/*void printGrid() {
		for (int i = 0; i < edgeLength;i++) {
			for (int j = 0; j < edgeLength; j++) {
				
			}
		}
	}*/
	float getSize() {
		return 0.0;
	}
	void setSize(){}
	static void printEmptyGrid(int edgeLength) {
		printTop(edgeLength);
		// i raw, m coloumn, k in square coloumn
		char occupation[5][5] = { {'Z','b','b','b','b'},{'b','z','b','b','b'}, {'b','b','D','b','b'}, {'b','b','b','C','b'}, {'b','b','b','b','X'} };
		for (int i = 0; i < edgeLength; i++) {
			cout << "|";
			for (int k = 0; k < 7; k++) {
				for (int m = 0; m < edgeLength; m++) {
					if (i== 0 && m == 0 && k == 1 ) {
						printHalfZombieUpperHand();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 2) {
						printHalfZombieHead();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 3 ) {
						printHalfZombieNeck();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 4) {
						printHalfBigZombieBody();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 5) {
						printHalfZombieLegs();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 6) {
						printHalfBigZombyTag();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 && k == 2) {
						printHalfZombieUpperHand();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 &&k == 3 ) {
						printHalfZombieHead();
						printHalfEndEmptySection();
					}					
					else if (i == 1 && m == 1 && k == 4) {
						printHalfLittleZombieBody();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 && k == 5) {
						printHalfZombieLegs();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 && k == 6) {
						printHalfLittleZombyTag();
						printHalfEndEmptySection();
					}
					else if (i== 2 && m == 2 && k == 3) {
						printHalfEmptySection();
						printHalfDerickHead();
					}
					else if (i == 2 && m == 2 && k == 4) {
						printHalfEmptySection();
						printHalfDerickBody();
					}
					else if (i == 2 && m == 2 && k == 5) {
						printHalfEmptySection();
						printHalfWarriorLegs();
					}
					else if (i == 2 && m == 2 && k == 6) {
						printHalfEmptySection();
						printHalfDerickTag();
					}
					else if (i == 3 && m == 3 && k == 3) {
						printHalfEmptySection();
						printHalfChichonneHead();
					}
					else if (i == 3 && m == 3 && k == 4) {
						printHalfEmptySection();
						printHalfChichonneBody();
					}
					else if (i == 3 && m == 3 && k == 5) {
						printHalfEmptySection();
						printHalfWarriorLegs();
					}
					else if (i == 3 && m == 3 && k == 6) {
						printHalfEmptySection();
						printHalfChichonneTag();
					}
					else if (i == 4 && m == 4 && k == 2) {
						printHalfZombieUpperHand();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 4 && k == 3) {
						printHalfZombieHead();
						printHalfChichonneHead();
					}
					else if (i == 4 && m == 4 && k == 4) {
						printHalfLittleZombieBody();
						printHalfChichonneBody();
					}
					else if (i == 4 && m == 4 && k == 5) {
						printHalfZombieLegs();
						printHalfWarriorLegs();
					}
					else if (i == 4 && m == 4 && k == 6) {
						printHalfLittleZombyTag();
						printHalfChichonneTag();
					}

					
					else if (i == 4 && m == 3 && k == 4) {
						printHealthUpper();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 3 && k == 5) {
						printHealthDown();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 3 && k == 6) {
						printHealthTag();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 2 && k == 4) {
						printUpperBullet();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 2 && k == 5) {
						printDownBullet();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 2 && k == 6) {
						printBulletTag();
						printHalfEndEmptySection();
					}

					else {
						printEmptySection();
					}
				}
				cout << "\n|";
			}
			for (int j = 0; j < edgeLength; j++) {
				cout << "_______________________|";
			}
			cout << "\n";
		}
	}
	static void printTop(int edgeLength) {
		for (int i = 0; i < edgeLength; i++) {
			cout << "________________________";
		}
		cout << "\n";
	}
	static void printEmptySection() {
		cout << "                       |";
	}
	static void printHalfEmptySection() {
		cout << "            ";
	}
	static void printHalfEndEmptySection() {
		cout << "           |";
	}
	static void printHalfZombieUpperHand() {
		cout << "     _      ";
	}
	static void printHalfZombieHead() {
		cout << "   O/_      ";
	}
	static void printHalfZombieNeck() {
		cout << "   n/       ";
	}
	static void printHalfBigZombieBody() {
		cout << "   O        ";
	}
	static void printHalfZombieLegs() {
		cout << "  / \\       ";
	}
	static void printHalfBigZombyTag() {
		cout << " B.Zomb.    ";
	}
	static void printHalfLittleZombyTag() {
		cout << " L.Zomb.    ";
	}
	static void printHalfLittleZombieBody() {
		cout << "   O/       ";
	}
	static void printHalfDerickHead() {
		cout << "     __ O  |";
	}
	static void printHalfDerickBody() {
		cout << "      \\\\O  |";
	}
	static void printHalfChichonneHead() {
		cout << "      \\ O  |";
	}
	static void printHalfChichonneBody() {
		cout << "       \\O  |";
	}
	static void printHalfWarriorLegs() {
		cout << "       / \\ |";
	}
	static void printHalfChichonneTag() {
		cout << "     Chich.|";
	}
	static void printHalfDerickTag() {
		cout << "    Derick |";
	}
	static void printHealthUpper() {
		cout << "  __|__     ";
	}
	static void printHealthDown() {
		cout << "    |       ";
	}
	static void printHealthTag() {
		cout << "  Health    ";
	}

	static void printUpperBullet() {
		cout << "   _____    ";
	}
	static void printDownBullet() {
		cout << "  |_____>   ";
	}
	static void printBulletTag() {
		cout << "   Ammo     ";
	}
};
/*
if (i== 0 && m == 0 && k == 1 ) {
						printHalfZombieUpperHand();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 2) {
						printHalfZombieHead();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 3 ) {
						printHalfZombieNeck();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 4) {
						printHalfBigZombieBody();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 5) {
						printHalfZombieLegs();
						printHalfEndEmptySection();
					}
					else if (i == 0 && m == 0 && k == 6) {
						printHalfBigZombyTag();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 && k == 2) {
						printHalfZombieUpperHand();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 &&k == 3 ) {
						printHalfZombieHead();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 && k == 4) {
						printHalfLittleZombieBody();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 && k == 5) {
						printHalfZombieLegs();
						printHalfEndEmptySection();
					}
					else if (i == 1 && m == 1 && k == 6) {
						printHalfLittleZombyTag();
						printHalfEndEmptySection();
					}
					else if (i== 2 && m == 2 && k == 3) {
						printHalfEmptySection();
						printHalfDerickHead();
					}
					else if (i == 2 && m == 2 && k == 4) {
						printHalfEmptySection();
						printHalfDerickBody();
					}
					else if (i == 2 && m == 2 && k == 5) {
						printHalfEmptySection();
						printHalfWarriorLegs();
					}
					else if (i == 2 && m == 2 && k == 6) {
						printHalfEmptySection();
						printHalfDerickTag();
					}
					else if (i == 3 && m == 3 && k == 3) {
						printHalfEmptySection();
						printHalfChichonneHead();
					}
					else if (i == 3 && m == 3 && k == 4) {
						printHalfEmptySection();
						printHalfChichonneBody();
					}
					else if (i == 3 && m == 3 && k == 5) {
						printHalfEmptySection();
						printHalfWarriorLegs();
					}
					else if (i == 3 && m == 3 && k == 6) {
						printHalfEmptySection();
						printHalfChichonneTag();
					}
					else if (i == 4 && m == 4 && k == 2) {
						printHalfZombieUpperHand();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 4 && k == 3) {
						printHalfZombieHead();
						printHalfChichonneHead();
					}
					else if (i == 4 && m == 4 && k == 4) {
						printHalfLittleZombieBody();
						printHalfChichonneBody();
					}
					else if (i == 4 && m == 4 && k == 5) {
						printHalfZombieLegs();
						printHalfWarriorLegs();
					}
					else if (i == 4 && m == 4 && k == 6) {
						printHalfLittleZombyTag();
						printHalfChichonneTag();
					}


					else if (i == 4 && m == 3 && k == 4) {
						printHealthUpper();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 3 && k == 5) {
						printHealthDown();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 3 && k == 6) {
						printHealthTag();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 2 && k == 4) {
						printUpperBullet();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 2 && k == 5) {
						printDownBullet();
						printHalfEndEmptySection();
					}
					else if (i == 4 && m == 2 && k == 6) {
						printBulletTag();
						printHalfEndEmptySection();
					}

					else {
						printEmptySection();
					}*/
