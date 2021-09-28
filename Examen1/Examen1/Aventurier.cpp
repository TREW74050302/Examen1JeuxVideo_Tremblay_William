#include "Aventurier.h"
#include <string>
#include <iostream>


Aventurier::Aventurier()
{
	attaque =50;
	force = 50;
	orDispo = 200;
	nom = "Willus LaMalice";
}
Aventurier::~Aventurier()
{

}
int Aventurier::getAtt()
{
	return attaque;
}
int Aventurier::getForce()
{
	return force;
}
int Aventurier::perdreOr(int orDispo)
{
	return orDispo - 10;
}
void Aventurier::acheterArme(Arme* arme)
{

	std::cout << "Quelle arme voulez-vous acheter ?";

	for (int i = 0; i < vecArme.size(); i++)
	{
		
	}
}
void Aventurier::ajouterArme(Arme* arme)
{
	vecArme.push_back(arme);
}
void Aventurier::changerArme(Arme* arme)
{
	vecArme.clear();
	ajouterArme(arme);
}
std::string Aventurier::getNom()
{
	return nom;
}
std::string Aventurier::to_string()
{
	std::string message = "";

	message.append("Je suis un  " + getNom() + "\n");
	message.append("Mon attaque est de " + std::to_string(this->getAtt()) + "\n");
	message.append("Ma force est de " + std::to_string(this->getForce()) + "\n");
	if (monArme != NULL)
	{
		message.append("Mon arme est : " + monArme->getNom() + "\n");
		message.append("La valeur de l'arme est de " + std::to_string(monArme->getValeur()) + "\n");
		message.append(monArme->to_string() + "\n");
	}
	
	return message;
	
}

std::string Aventurier::afficherMenu()
{
	return to_string();
}

