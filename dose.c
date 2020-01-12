#include<stdio.h>//                                        بسم الله  الرحمن الرحیم
int dooz[2][2],turn;
void main(int argc, char const *argv[]) {
  solverDooz();
  return 0;
}

void howstart(){
  printf("\t \t \t IN THE NAME OF ALLAH \n Helo gamers \n  welcome to game dooz \n  please select how starter game .\n if insertNumber = 1 your starter game or  insertNumber = 2 the computer starter game  *** for inser number in cell must your number true . the number true for select a cell and insert first insert number vertical(4<vertical>0) and then second first insert number horizontal(4<horizontal>0)***  \n \n   Let's start the game \n   \n ");
  displaydooz();
  turn=getNumber(1,2);
}

int getNumber(int low,int hi){
  int inputNumber;
  //  printf("%i please insert true number  the number is %s < input number > %s And the home notFull  ",low,hi);//----------------------------------سلام از اینجا درست کردن پیام اینکه  کم و زیاد در متن چاپ شود
  do{
    scanf("%d",&inputNumber);
    if(inputNumber>=low & inputNumber<=hi){
    return inputNumber;}
    printf("***error***   your number not true   ***error*** ");
  }  while (inputNumber<=low | inputNumber>=hi);
}

void displaydooz(){// print a list 3*3
  for  (int x=0;x<=2;x++){
   printf("\n");
   printf("\t");
   printf("\t");
   printf("\t");
   printf("\t");
     for (int y=0;y<=2;y++){
       printf("%d",dooz[x][y]);
       printf("\t");}
   printf("\n");
   printf("\n");}

  printf("\n");
}
