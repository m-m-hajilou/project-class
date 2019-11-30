#include<stdio.h>//                                        بسم الله  الرحمن الرحیم
#include<stdlib.h>
#include<string.h>
int dooz[2][2],turn,winer,levelNumberInserted=1;//  if all dooz is empty levelNumberInserted=1  & if dooz 1 cell full levelNumberInserted=2 & if dooz 1 cell full levelNumberInserted=2  ** Attention**  if in levelNumberInserted=3 and The computer fails insert number for Surface 3  then levelNumberInserted=2 **Attention**
int  main(int argc, char const *argv[]) {
    solverDooz();
  return 0;
}

void solverDooz(){// سلام چک شود که قبل اینکه عدد وارد شود برسی شود بازی به انتها رسیده است یا خیر.یاعلی علیه السلام
  howstart();
  while (doozEnd()!=1) {//  ویا اگر رسیده است باید به گونه ای تمام شود یاعلی علیه السلام
    if (turner()==1) {
      SelectDoozHomeUser();
    //}
    if(doozEnd()!=1){
      if (turner()==2) {
        SelectDoozHomeComputer();
      }//if
    }//if
    }//if
  }//while
  void checkWinDooz();
}//solverDooz

void howstart(){
  printf("\t \t \t IN THE NAME OF ALLAH \n Helo gamers \n  welcome to game dooz \n  please select how starter game .\n if insertNumber = 1 your starter game or  insertNumber = 2 the computer starter game  *** for inser number in cell must your number true . the number true for select a cell and insert first insert number vertical(4<vertical>0) and then second first insert number horizontal(4<horizontal>0)***  \n \n   Let's start the game \n   \n ");
  displaydooz();
   do {
     turn=getNumber(1,2);
     printf("salammmmmmmmmmmmmmmmmmmm" );
     if(3>turn<0){
       printf("plase select a true gamer if insertNumber = 1 your starter game or  insertNumber = 2 the computer starter game");
     }//if
   } while(3>turn<0);
   printf("ali" );
}//howstart
void displaydooz(){
  for  (int x=0;x<=2;x++){ //print number horizental
   printf("\n");
   printf("\t");
   printf("\t");
   printf("\t");
   printf("\t");
   for (int y=0;y<=2;y++){//print number vertical
      printf("%d",dooz[x][y]);
      printf("\t");} //fory
      printf("\n");
      printf("\n");} // for x
      printf("\n");
}//displaydooz

int turner (){
  if((turn%=2)==0){
    return 2;
  }//if
  if((turn%=2)==1){
    return 1;
  }//if
}//turner

int SelectDoozHomeUser (){
int i,j,checkTrueInsertNumber=0;
  //if(doozEnd()!=0){
    do {
      i=getNumber(0,2);
      j=getNumber(0,2);
      if(cellIsFull(i,j)==1){
      printf("the cell is full please select a cell empty");
      }//if
      else{
        checkTrueInsertNumber=1;
      }//else
    } while(checkTrueInsertNumber==0);
    turn++;
    levelNumberInserted++;
    //return 1;}//if
    //else{
      //  return 0;
    //}else
}//SelectDoozHomeUser

int doozEnd(){
  for (int x = 0; x <=2; x++) {
    for (int y = 0; y <=2; y++) {
      if(dooz[x][y]==0){
        return 0;
      }//if
    }//for y
  }//for x
  void checkWinDooz();
  return 1;
}//doozEnd
int checkDoozWin(){
if ((checkDoozWinVerticalVector()!=1 ||  checkDoozWinHorizontalVector ()!=1 ||  checkDoozWinCrisscrossRightVector()!=1 ||  checkDoozWinCrisscrossLeftVector()!=1)&&doozEnd()==1 ){
  printf("%d\n  the game finish in game not have winer" );
  return 0;
}//if
  else {
    printf("%d\n  --**winer**-- =",winer );//سلام بهتره بعدا مشخص کنه کی برده
    return 1;
  }//else
}//checkWinDooz

int cellIsFull(int i,int j){
if(dooz[i][j]==0){
  return 0;
  }//if
  else{
    return 1;
  }//else
}//cellIsFull

void insertNumberSystem (int i,int j,int insertNumber){
    dooz[i][j]=insertNumber;
}//insertNumberInDooz

int getNumber(int *low,int *hi){
  int inputNumber;
  scanf("%d",&inputNumber);
  printf("%d \n  inputNumber==" ,inputNumber);
  //printf("%i please insert true number  the number is %s < input number > %s And the home notFull  ",low,hi);//----------------------------------سلام از اینجا درست کردن پیام اینکه  کم و زیاد در متن چاپ شود
  while (inputNumber<=low |inputNumber>=hi) {
    scanf("%d",&inputNumber);
    printf("***error***   your number not true   ***error*** ");//if
  }
  //} while(inputNumber>=low |inputNumber<=hi);
  return inputNumber;
}//getNumber

int checkDoozWinHorizontalVector(){
  int compaire;
  for (int x = 0; x <=2; x++) {
    compaire=dooz[x][0];
    for (int y = 1; y <=2; y++) {
      if (compaire!=dooz[x][y]) {
        return  0;
      }//if
    }//for y
  }//for x
  winer=compaire;
  return 1;
}//checkDoozWinHorizontalVector

int checkDoozWinVerticalVector(){
  int compaire;
  for (int y = 0; y <=2; y++) {
    compaire=dooz[0][y];
    for (int x = 1; x <=2; x++){
      if (compaire!=dooz[x][y]) {
        return  0;
      }//if
    }//for y
  }//for x
  winer=compaire;
  return 1;
}//checkDoozWinVerticalVector

int checkDoozWinCrisscrossRightVector(){
  int compaire;
  compaire=dooz[0][0];
  for (int y = 1; y <=2; y++) {
    if(compaire!=dooz[y][y]){
      return 0;
    }//if
    }//for y
  winer=compaire;
  return 1;

}//checkDoozWinCrisscrossRightVector
int checkDoozWinCrisscrossLeftVector(){
  int compaire;
  compaire=dooz[2][2];
  for (int y = 2; y >=1; y--) {
    if(compaire!=dooz[y][y]){
      return 0;
    }//if
    }//for y
  winer=compaire;
  return 1;
}//checkDoozWinCrisscrossRightVector

void SelectDoozHomeComputer(){
  if (levelNumberInserted==1){
    systemSingelinsert();
    levelNumberInserted++;
  }//if

}//SelectDoozHomeComputer

int systemSingelinsert(){
  int randomNumber1,randomNumber2;
if(dooz[1][1]==0){
  dooz[1][1]=2;}//if
  else
  {
    do {// A loop for selecting the first random cell by computer
      randomNumber1=setRandoms(0,2);
      randomNumber2=setRandoms(0,2);
      if((dooz[randomNumber1][randomNumber2])!=1){
        dooz[randomNumber1][randomNumber2]=2;
      }//if
    } while(dooz[randomNumber1][randomNumber2]==1);
  }//else
}//systemSingelinsert
int setRandoms(int low, int up){
   return rand()% (up+low+1)+low;
}//function
//.یاعلی علیه السلام
