#include "lab1.h"
#include "..\Console.h"
using namespace std;
using namespace System;

int Q5()
{
	int iNumofSword = 0, iNumofShield = 0;
	double dNumofPotion = 0.00;
	int iPriceofSword = 5, iPriceofShield = 8, iPriceofPotion = 3;
	cout << "Welcome to Gentle Jerry's generic Goods!" << endl
		<< "\tSword - " << iPriceofSword << " gold each" << endl
		<< "\tShield - " << iPriceofShield << " gold each" << endl
		 << "\tPotion - " << iPriceofPotion << " gold per ounce\n\n";
	cout << "How many Swords would you like to buy? ";
	cin >> iNumofSword;
	cout << "How many Shields would you like to buy? ";
	cin >> iNumofShield;
	cout << "How many ounces of Potion would you like to buy? ";
	cin >> dNumofPotion;
	cout << "\n" << iNumofSword << " Swords = " << iNumofSword * iPriceofSword << " gold" << endl;
	cout << "\n" << iNumofShield << " Shields  = " << iNumofShield * iPriceofShield << " gold" << endl;
	cout << "\n" << dNumofPotion << " Ounces of Potion = " << dNumofPotion * iPriceofPotion << " gold" << endl;
	return EXIT_SUCCESS;
}