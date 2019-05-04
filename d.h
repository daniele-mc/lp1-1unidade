#ifndef D_H
#define D_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class D{
 private:
   int dado1;
   int dado2;

 public:
   //D();
   D(int dado1 = 6, int dado2 = 6);
   int jogarD();
};
#endif