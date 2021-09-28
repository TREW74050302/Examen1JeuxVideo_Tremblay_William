#include "FactoryArme.h"
#include "Arme.h"
#include "Dague.h"
#include "Broadsword.h"
#include "Katana.h"


enum class TypeArme
{
	Dague = 1,
	BroadSword = 2,
	Katana = 3
};
inline int genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}
Arme* FactoryArme::getRandomArme()
{
	Arme* arme(0);

	TypeArme typeA = (TypeArme)::genererNb(1, 3);
	if (typeA == TypeArme::Dague)
	{
		arme = new Dague();
	}
	else if (typeA == TypeArme::BroadSword)
	{
		arme = new Broadsword();
	}
	else
		arme = new Katana();

	return arme;




}
