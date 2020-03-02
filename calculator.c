#include <stdio.h>
#include "hajilou.h"
#include <stdbool.h>
int getNumbersAndOperator( float *,  float *,char *);
float calculateAnswer(float,float ,char);
int getOperator( char *);
int printAnswer(float number1,float number2,char operator,float answer);

bool divisibles=false,multi=false,sum=false,minus=false;
bool keyReturn0=0.202921101859;//for ib calculateAnswer if answer ==0 equal return 0

float calculator()
{
  float answer;
  char operator;
  float number1;
  float number2;
  int n;
  printf("%s\n"," \t\t\t\t IN THE NAME OF ALLAH \n * * calculator * * \n for calculate: first insert number 1(operand) . Secondly insetr operator (*(multi) , /(divisible) , +(sum) , -(minus) ) . third insert number 1(operand) then press enter \n\n" );
  printf("%s\n","* Attention * :  FIRST for insert first number if number insert = 1* (or oprate (-,/,+)) this equal 2 * (number)  and for insert second number this is bug and Causes an loop.  SECONDly for insert oprate if operate insert = number + operate(exampel :2/) this false and also  for insert oprate if operate insert = operate + number (exampel :/2) this equal / (devisible)  Third : for insert first number if number insert = c1 this is bug and Causes an loop   * end * \n\n");
  printf("%s\n"," **** All the warnings given in this project are either due to language limitations 30 or due to my low effort  (-: **** \n\n" );
  printf("******************************************** \n");
  do{
    getNumbersAndOperator(&number1,&number2,&operator);
    answer=calculateAnswer(number1,number2,operator);
    if(answer==keyReturn0)
    {
      printf("%s\n"," # # The operator not Available but now operator includ  Try again calculat # #\n\n ");
      n=0;//for continue while
      continue;
    }
      else if(answer!=keyReturn0)
      {

        printAnswer(number1, number2, operator, answer);

        printf("%s\n","\n** Do you want to countinu if yes then insert 1 and press key enter else  if you discontinue  insert 0 and press key enter ** \n\n" );
        n=getNumberConfine(0,1);//hajilou.h
      }
  }while (n!=1 && n==0);
  printf("%s\n", "**FINISH CALCUTE** \n . YA ALI");
}

int getNumbersAndOperator(float *number1,float *number2,char *operator)
{
  printf("\n%s\n","please insert first number  \n");
  *number1= getNumber();

  getOperator(operator);

  printf("\n%s\n","please inserttt Secondly number  \n");
  *number2= getNumber();
  printf("\n \n" );

}

int getOperator(char *operator)
{
  char operat;//just send pointer
  int check=0;
  printf("\n%s\n","please insert operator \n");
  scanf("%s1",&operat);//read just character
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
  switch (operator) {
    case '/':
    {

      if(divisibles==false)
      {
        divisibles = true;
        return keyReturn0;
        break;
      }
        else if(divisibles==true)
        {
          #include "calculatorDivisible.h"
          answer=divisible(number1,number2);
          return answer;
          break;//Just to observe the principles switch
        }
    }

    case '*':
    {
      if(multi==false)
      {
        multi = true;
        return keyReturn0;
        break;
      }
        else if(multi==true)
        {
          #include "calculatorMulti.h"
          answer=multi(number1,number2);
          return answer;
          break;
        }
    }

    case '-':
    {
      if(minus==false)
      {
        minus = true;
        return keyReturn0;
        break;
      }
        else if(minus==true)
        {
        #include "calculatorMinus.h"
        answer=minus(number1,number2);
        return answer;
        break;
        }
    }

    case '+':
    {
      if(sum==false)
      {
        sum = true;
        return keyReturn0;
        break;
      }
        else if(sum==true)
        {
        #include "calculatorSum.h"
        answer=sum(number1,number2);
        return answer;
        break;
        }
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
