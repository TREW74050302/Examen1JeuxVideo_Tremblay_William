#include "Arme.h"
#include <string>

inline int genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

Arme::Arme()
{
	getRarete();
	if (rarete == RARETE::COMMUN)
	{
		attaque = 1;
		durabilite = 5;
		poids = 10;
	}
	if (rarete == RARETE::RARE)
	{
		attaque = 3;
		durabilite = 8;
		poids = 5;
	}
	if (rarete == RARETE::EPIQUE)
	{
		attaque = 5;
		durabilite = 12;
		poids = 3;
	}
	else
		attaque = 7;
		durabilite = 20;
		poids = 1;

	poids = 10;
	nom = "Arme ";
	valeur = 100;
}

Arme::~Arme()
{

}

int Arme::getValeur()
{
	return valeur;
}

int Arme::getAtt()
{
	return attaque;
}

int Arme::getDur()
{
	return durabilite;
}
float Arme::getPoids()
{
	return poids;
}
std::string Arme::getNom()
{
	return nom;
}
RARETE Arme::getRarete()
{
	rarete = (RARETE)::genererNb(1, 4);
	return rarete;
}

std::string Arme::to_string()
{
	std::string message = "";

	message.append("Je suis une arme \n");
	message.append("\n");
	message.append("Nom : " + getNom() + "\n");
	message.append("Attaque : " + std::to_string(this->getAtt()) + "\n");
	message.append("Durabilite : " + std::to_string(this->getDur()) + "\n");
	message.append("Poids : " + std::to_string(this->getPoids()) + "\n");
	message.append("Valeur :" + std::to_string(this->getValeur()) + "\n");
	
	return message;
}



