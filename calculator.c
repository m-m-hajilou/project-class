#include <stdio.h>
#include "hajilou.h"
int getnumberAndOprator( int *,  int *, char *);
float calculator()
{
  float javab;
  char oprator;

  switch (oprator) {
    case '*':
    {
    #include "calculatorDivisible.h"
    getnumberAndOprator(&number1,&number2,&oprator);
    javab=divisible(number1,number2);
    printf("%f\n",javab );
      break;
    }
  }

}

int getnumberAndOprator( int *number1,  int *number2, char *oprator)
{
  printf("%s\n","IN THE NAME OF ALLH hi this is a calculator first : insert number1  second : insert operator (*,/,+,-) third :insert number2  \n \n");
  printf("%s\n","please insert first number \n \n");
  *number1= getNumber();

  printf("%s\n","please insert oprator \n \n");
  scanf("%s",*oprator);

  printf("%s\n","please inserttt seond number \n \n");
  *number2= getNumber();

}

int main(int argc, char const *argv[])
{
   calculator();
   return(0);
}
