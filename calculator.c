#include <stdio.h>
#include "hajilou.h"
#include <stdbool.h>
int getNumbersAndOperator( float *,  float *,char *);
float calculateAnswer(float,float ,char);
int getOperator( char *);
int printAnswer(float number1,float number2,char operator,float answer);
float calculator()
{
  float answer;
  char operator;
  float number1;
  float number2;
  int n;
  printf("%s\n"," \t\t\t\t IN THE NAME OF ALLAH \n * * calculator * * \n for comput: first insert number 1(operand) . second insetr operator (*,/,+,-) . third insert number 1(operand) then press enter \n\n" );
  do{
    getNumbersAndOperator(&number1,&number2,&operator);
    answer=calculateAnswer(number1,number2,operator);
    if(answer==0)
    {
      printf("%s\n","The operator not Available but now operator including  Try again calculat");
      n=0;//for continue while
      continue;
    }
      else if(answer!=0)
      {

        printAnswer(number1, number2, operator, answer);

        printf("%s\n","\n** Do you want to countinu if yes then insert 1 and press key enter or if you want end  insert 0 and press key enter ** \n\n" );
        n=getNumberConfine(0,1);//hajilou.h
      }
  }while (n!=1 && n==0);
  printf("%s\n", "**FINISH CALCUTE** \n . YA ALI");
}

int getNumbersAndOperator(float *number1,float *number2,char *operator)
{
  printf("%s\n","please insert first number \n \n");
  *number1= getNumber();

  getOperator(operator);

  printf("%s\n","please inserttt second number \n \n");
  *number2= getNumber();
  printf("\n \n" );

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

float calculateAnswer(float number1,float number2,char operator)
{
  float answer;
  bool divisibles,multi,sum,minus;
  divisibles,multi,sum,minus=0;
  switch (operator) {
    case '/':
    {

      if(divisibles==0)
      {
        divisibles = 1;
        return 0;
        break;
      }
        else if(divisibles==)
        {
          #include "calculatorDivisible.h"
          answer=divisible(number1,number2);
          return answer;
          break;//Just to observe the principles switch
        }
    }

    case '*':
    {
      #include "calculatorMulti.h"
      answer=multi(number1,number2);
      return answer;
      break;
    }
    case '-':
    {
      #include "calculatorMinus.h"
      answer=minus(number1,number2);
      return answer;
      break;
    }
    case '+':
    {
      #include "calculatorSum.h"
      answer=sum(number1,number2);
      return answer;
      break;
    }
    default:
    {
      return 0;
    }
  }
}

int printAnswer(float number1,float number2,char operator,float answer)
{
  printf("%s\n\n","**  THE  ANSWER  **");
  printf("%.1f  %c  %.1f  =  %.1f\n \n",number1,operator,number2,answer );
}

int main(int argc, char const *argv[])
{
   calculator();
   return(0);
}
