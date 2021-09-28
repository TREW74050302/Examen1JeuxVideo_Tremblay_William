#pragma once
#include "Arme.h"

class Broadsword: public Arme
{
public:

	Broadsword();
	~Broadsword();

	virtual std::string to_string();
};

