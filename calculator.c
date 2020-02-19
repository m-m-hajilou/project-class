#include <stdio.h>
#include "hajilou.h"
//#include "calculatorDivisible.h"
float calculator()
{
  char oprator;
  printf(" \n","IN THE NAME OF ALLH hi this is a calculator first : insert number1  second : insert operator (*,/,+,-) third :insert number2  \n \n");
  printf(" \n","please insert first number \n \n");
  float number1= getNumber();

  printf(" \n","please insert oprator \n \n");
  scanf(" \n",oprator);

  printf(" \n","please insert seond number \n \n");
  float number2= getNumber();
}

int main(int argc, char const *argv[])
{
  calculator();
  return 0;
}
