#include "Katana.h"

Katana::Katana()
{
	nom = "Katana";
	attaque = 80 + this->attaque;
	durabilite = 30;
	poids = 30;
}
Katana::~Katana()
{

}
std::string Katana::to_string()
{
	std::string message = Arme::to_string();
	message.append("Je suis un Katana \n");
	return message;
}
