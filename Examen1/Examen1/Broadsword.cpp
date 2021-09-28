#include "Broadsword.h"

Broadsword::Broadsword()
{
	nom = "Broadsword";
	attaque = 60;
	durabilite = 70;
	poids = 100;
}
Broadsword::~Broadsword()
{

}
std::string Broadsword::to_string()
{
	std::string message = Arme::to_string();
	message.append("Je suis une broadsword \n");
	return message;
}