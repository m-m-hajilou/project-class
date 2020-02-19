#include <stdio.h>
#include "hajilou.h"
#include "calculatorDivisible.h"
float calculator()
{
  float javab;
  char oprator;
  printf("%s\n","IN THE NAME OF ALLH hi this is a calculator first : insert number1  second : insert operator (*,/,+,-) third :insert number2  \n \n");
  printf("%s\n","please insert first number \n \n");
  float number1= getNumber();

  printf("%s\n","please insert oprator \n \n");
  scanf("%s",&oprator);

  printf("%s\n","please inserttt seond number \n \n");
  float number2= getNumber();

  switch (oprator) {
    case '*':
    javab=divisible(number1,number2);
    printf("%i\n",javab );
      break;
  }

}

int main(int argc, char const *argv[])
{
  calculator();
  return 0;
}
