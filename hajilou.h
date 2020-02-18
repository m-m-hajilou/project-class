#include<stdio.h>
float inputNumber;
float getNumberConfine(int low,int hi,char message)
{
  printf("%s please insert true number  the number is %d <= input number >= %d And the home notFull \n \n ",message,low,hi);
  do
  {
    scanf("%f",&inputNumber);
    if(inputNumber>=low & inputNumber<=hi)
    {
    return inputNumber;
    }
    printf("***error***   your number not true   ***error*** ");
  }  while (inputNumber<=low | inputNumber>=hi);
}

float getNumber()
{
  scanf("%f",&inputNumber);
  return inputNumber;
}
