#include <cstdlib>

using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
  srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
  int n;
  n = rand()%20+4;
  return n;
}
