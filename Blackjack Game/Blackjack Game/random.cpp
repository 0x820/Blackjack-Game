#include "random.h"

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}