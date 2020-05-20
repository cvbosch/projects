#include "Random.h"
#include <ctime>
using namespace std;

mt19937 Random::random(time(0));

int Random::IntRNG(int min, int max)
{
	uniform_int_distribution<int> dist(min, max);
	return dist(random);
}

float Random::FloatRNG(float min, float max)
{
	uniform_real_distribution<float> dist(min, max);
	return dist(random);
}