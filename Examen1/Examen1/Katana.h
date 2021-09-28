#pragma once
#include "Arme.h"

class Katana : public Arme
{
public:

	Katana();
	~Katana();

	virtual std::string to_string();
};

