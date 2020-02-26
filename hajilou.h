#include<stdio.h>
float inputNumber;
float getNumberConfineAndMessage(int low,int hi,char message)
{
  printf("%s please insert true number  the number is %d <= input number >= %d  \n \n ",message,low,hi);
  do
  {
    scanf("%f",&inputNumber);
    if(inputNumber>=low & inputNumber<=hi)
    {
    return inputNumber;
    }
    printf("%s***error***   your number not true   ***error*** \n please insert true number  the number is %d <= input number >= %d  \n \n ",low,hi);
  }  while (inputNumber<=low | inputNumber>=hi);
}

float getNumberConfine(int low,int hi)
{
  printf(" please insert true number  the number is %d <= input number >= %d  \n \n ",low,hi);
  do
  {
    scanf("%f",&inputNumber);
    if(inputNumber>=low & inputNumber<=hi)
    {
    return inputNumber;
    }
    printf("***error***   your number not true   ***error*** \n please insert true number  the number is %d <= input number >= %d  \n \n ",low,hi);
  }  while (inputNumber<=low | inputNumber>=hi);
}

float getNumber()
{
  scanf("%f",&inputNumber);
  return inputNumber;
}
