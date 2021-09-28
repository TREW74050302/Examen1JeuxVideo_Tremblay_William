#pragma once
#include <list>
#include "Arme.h"

enum class HUMEUR
{
	CONTENT = 1,
	FACHE = 2
};

class Marchand
{
public:
	Marchand();
	~Marchand();
	void initArme();
	void getArmeShop();

private:
	int prix;
	std::list<Arme*> listArme;
};

