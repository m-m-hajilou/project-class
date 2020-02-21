#include <stdio.h>
#include "hajilou.h"
int getnumberAndOprator( int *,  int *, char *);
float calculator()
{
  float answer;
  char oprator;
  int number1;
  int number2;
  getnumberAndOprator(&number1,&number2,&oprator);
  switch (oprator) {
    case '/':
    {
    #include "calculatorDivisible.h"
    answer=divisible(number1,number2);
    printf("%f\n",answer );
      break;
    }
    case '*':
    {
    #include "calculatorMulti.h"
    answer=multi(number1,number2);
    printf("\n%f\n",answer );
      break;
    }
    case '-':
    {
    #include "calculatorMinus.h"
    answer=minus(number1,number2);
    printf("\n%f\n",answer );
      break;
    }
    case '+':
    {
    #include "calculatorSum.h"
    answer=sum(number1,number2);
    printf("\n%f\n",answer );
      break;
    }
    default:
    {
      printf("%s\n","Your operator cannot be identified in our application" );
    }
  }

}

int getnumberAndOprator( int *number1,  int *number2, char *operator)
{
  int oprat;//just send pointer
  printf("%s\n","IN THE NAME OF ALLH hi this is a calculator first : insert number1  second : insert operator (*,/,+,-) third :insert number2  \n \n");
  printf("%s\n","please insert first number \n \n");
  *number1= getNumber();

  printf("%s\n","please insert oprator \n \n");
  scanf("%s",&oprat);
  *operator=oprat;

  printf("%s\n","please inserttt second number \n \n");
  *number2= getNumber();

}

int main(int argc, char const *argv[])
{
   calculator();
   return(0);
}
