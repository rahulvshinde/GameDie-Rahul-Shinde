#include<iostream>
#include "GameDie.h"

using namespace std;

int main()
{
  int n;
  GameDie gd;
  n = gd.roll();
  cout<<"Random Number : "<<n<<endl;
  return 0;
}
