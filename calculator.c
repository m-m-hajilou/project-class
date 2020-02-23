#include <stdio.h>
#include "hajilou.h"
int getNumbersAndOperator( float *,  float *,char *);
int getOperator( char *);
float calculator()
{
  char operator;
  float number1;
  float number2;
  printf("%s\n"," \t\t\t\t IN THE NAME OF ALLAH \n * * calculator * * \n for comput: first insert number 1(operand) . second insetr operator (*,/,+,-) . third insert number 1(operand)" );
  getNumbersAndOperator(&number1,&number2,&operator);



}

int getNumbersAndOperator(float *number1,float *number2,char *operator)
{
  printf("%s\n","IN THE NAME OF ALLH hi this is a calculator first : insert number1  second : insert operator (*,/,+,-) third :insert number2  \n \n");
  printf("%s\n","please insert first number \n \n");
  *number1= getNumber();

  getOperator(operator);

  printf("%s\n","please inserttt second number \n \n");
  *number2= getNumber();

}

int getOperator(char *operator)
{
  char operat;//just send pointer
  int check=0;
  printf("%s\n","please insert operator \n \n");
  scanf("%s",&operat);
  if(operat =='*' || operat =='+' || operat =='-' || operat =='/')
  {
    check=1;
  }
  while(check==0)
  {
    printf("%s\n"," * *The operator isnot true .  please insert  true operator* * \n \n");
    scanf("%s\n",&operat );
    if(operat !='*' || operat !='+' || operat !='-' || operat !='/')
    {
      check=1;
    }
  }
  *operator=operat;
  return 1;
}
char switchingOperator (int operator)
{
  float answer;
  switch (operator) {
    case '/':
    {
      return '/';
    }
    case '*':
    {
      return '*';
    }
    case '-':
    {
      return '-';
    }
    case '+':
    {
      return '+';
    }
    default:
    {
      return "Null";
    }
  }
}

int main(int argc, char const *argv[])
{
   calculator();
   return(0);
}
