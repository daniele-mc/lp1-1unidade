#include "d.h"
 
/*D::D(){
   dado1=6;
   dado2=6;
}*/
 D::D(int dado1 , int dado2 ){
   this->dado1 = dado1;
   this->dado2 = dado2;
}
int D::jogarD(){
   int resultado1 = 0;
   int resultado2 = 0;
   resultado1 += rand() % dado1 + 1;
   resultado2 += rand() % dado2 + 1;
   int resultadoFinal = resultado1+resultado2;
   return resultadoFinal;
}