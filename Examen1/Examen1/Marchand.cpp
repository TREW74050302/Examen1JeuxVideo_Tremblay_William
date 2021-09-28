#include "Marchand.h"
#include <iostream>
#include "FactoryArme.h"


inline int genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}
Marchand::Marchand()
{
	HUMEUR humeur = (HUMEUR)genererNb(1, 2);
	if (humeur == HUMEUR::CONTENT)
	{
		prix - 100;
	}
	else
		prix += 100;
}
Marchand::~Marchand()
{

}
void Marchand::initArme()
{
	for (int i = 0; i < 3; i++)
	{
		listArme.push_back(FactoryArme::getRandomArme());
	}
}
void Marchand::getArmeShop()
{
	initArme();
	for (auto it = listArme.begin(); it != listArme.end(); it++)
	{
		std::cout << (*it) << ' ';
	}
}