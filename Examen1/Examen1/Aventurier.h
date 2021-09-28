#pragma once
#include "Arme.h"
#include <vector>

class Aventurier
{
public:

	Aventurier();
	~Aventurier();

	int getAtt();
	int getForce();
	void acheterArme(Arme* arme);
	void ajouterArme(Arme* arme);
	void changerArme(Arme* arme);
	std::string afficherMenu();
	std::string to_string();
	std::string getNom();

private:
	int attaque;
	int force;
	int orDispo;
	int prix;
	Arme* monArme;
	std::vector<Arme*> vecArme;
	int perdreOr(int orPerdu);

protected:
	std::string nom;
};

