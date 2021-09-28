#pragma once
#include <string>

enum class RARETE
{
	COMMUN = 1,
	RARE = 2,
	EPIQUE = 3,
	LEGENDAIRE = 4
};

class Arme
{
public:
	Arme();
	~Arme();
	int getValeur();
	int getAtt();
	int getDur();
	float getPoids();
	std::string getNom();
	RARETE getRarete();
	std::string to_string();


private:
	int valeur;

protected:
	int attaque;
	int durabilite;
	float poids;
	std::string nom;

	RARETE rarete;
};

