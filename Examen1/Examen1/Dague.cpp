#include "Dague.h"

Dague::Dague()
{
	nom = "Dague";
	attaque = 50 + this->attaque;
	durabilite = 40;
	poids = 10;
}
Dague::~Dague()
{

}
std::string Dague::to_string()
{
	std::string message = Arme::to_string();
	message.append("Je suis une dague \n");
	return message;
}