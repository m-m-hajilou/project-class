#include<stdio.h>//                                        بسم الله  الرحمن الرحیم
#include<stdlib.h>
#include<string.h>
int dooz[2][2],turn,winer,levelNumberInserted=0;//  if all dooz is empty levelNumberInserted=1  & if dooz 1 cell full levelNumberInserted=2 & if dooz 1 cell full levelNumberInserted=2  ** Attention**  if in levelNumberInserted=3 and The computer fails insert number for Surface 3  then levelNumberInserted=2 **Attention**
int  main(int argc, char const *argv[]) {
    solverDooz();
  return 0;
}

void solverDooz(){// سلام چک شود که قبل اینکه عدد وارد شود برسی شود بازی به انتها رسیده است یا خیر.یاعلی علیه السلام
  howstart();
  printf("%d =level",levelNumberInserted);
  while (doozEnd()!=1 || checkDoozWin()!=1) {//  ویا اگر رسیده است باید به گونه ای تمام شود یاعلی علیه السلام
    if (turner()==1) {
      SelectDoozHomeUser();
      printf("%d=turner2   ",turn);
      turn++;

      printf("%d =level",levelNumberInserted);
      displaydooz();
    }
     if(doozEnd()!=1 || checkDoozWin()!=1){
      if (turner()==2) {
        printf("%d=turner3   ",turn);
        SelectDoozHomeComputer();
        turn++;
        levelNumberInserted++;
        printf("%d =level",levelNumberInserted);
        displaydooz();
     }//if
    }//if
  }//while
}//solverDooz

void howstart(){
  printf("\t \t \t IN THE NAME OF ALLAH \n Helo gamers \n  welcome to game dooz \n  please select how starter game .\n if insertNumber = 1 your starter game or  insertNumber = 2 the computer starter game  *** for inser number in cell must your number true . the number true for select a cell and insert first insert number vertical(4<vertical>0) and then second first insert number horizontal(4<horizontal>0)***  \n \n   Let's start the game \n   \n ");
  displaydooz();
   //do {
     turn=getNumber(1,2);
     //if(3>turn<0){
       //printf("plase select a true gamer if insertNumber = 1 your starter game or  insertNumber = 2 the computer starter game");
     //}//if
   //} while(3>turn<0);
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

int getNumber(int low,int hi){
  int inputNumber;
    printf("\n");
    printf(" %d ==low ",low);
    printf(" %d  ==hi ",hi);
    printf("\n");
    //printf("%i please insert true number  the number is %s < input number > %s And the home notFull  ",low,hi);//----------------------------------سلام از اینجا درست کردن پیام اینکه  کم و زیاد در متن چاپ شود
  do{
    scanf("%d",&inputNumber);
    if(inputNumber>=low & inputNumber<=hi){
    return inputNumber;}
    printf("***error***   your number not true   ***error*** ");
  }  while (inputNumber<=low | inputNumber>=hi);
}
int turner (){
  printf("%d=turner1   ",turn);
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
      else if(cellIsFull(i,j)==0){
        dooz[i][j]=1;
        checkTrueInsertNumber=1;
        return 1;
      }//elseif
    } while(checkTrueInsertNumber==0);

}//SelectDoozHomeUser

int doozEnd(){
  for (int x = 0; x <=2; x++) {
    for (int y = 0; y <=2; y++) {
      if(dooz[x][y]==0){
        return 0;
      }//if
    }//for y
  }//for x
  return 1;
}//doozEnd
int checkDoozWin(){
if ((checkDoozWinVerticalVector()!=1 ||  checkDoozWinHorizontalVector ()!=1 ||  checkDoozWinCrisscrossRightVector()!=1 ||  checkDoozWinCrisscrossLeftVector()!=1)&&doozEnd()==1 ){
  printf("%d\n  the game finish in game not have winer" );
  return 0;
}//if
  else if (checkDoozWinVerticalVector()==1 ||  checkDoozWinHorizontalVector ()==1 ||  checkDoozWinCrisscrossRightVector()==1 ||  checkDoozWinCrisscrossLeftVector()==1) {
    printf("%d\n  --**winer**-- =",winer );//سلام بهتره بعدا مشخص کنه کی برده
    return 1;
  }//elseif
  return 0;
}//checkDoozWin

int cellIsFull(int i,int j){
if(dooz[i][j]==0){
  return 0;
  }//if
  else{
    return 1;
  }//else
}//cellIsFull

void insertNumberSystem (int i,int j,int insertNumber){///*****  all INPUT use this is*******
  dooz[i][j]=insertNumber;
}//insertNumberSystem

int checkDoozWinHorizontalVector(){
  int compaire;
  for (int x = 0; x <=2; x++) {
    if(dooz[x][0]==0){
      return 0;}
      else{
    compaire=dooz[x][0];
    for (int y = 1; y <=2; y++) {
      if (compaire!=dooz[x][y]) {
        return  0;
      }//if
    }//else
    }//for y
  }//for x
  winer=compaire;
  printf("checkDoozWinHorizontalVector" );
  return 1;
}//checkDoozWinHorizontalVector

int checkDoozWinVerticalVector(){
  int compaire;
  for (int y = 0; y <=2; y++) {
    if(dooz[0][y]==0){
      return 0;}
      else{
    compaire=dooz[0][y];
    for (int x = 1; x <=2; x++){
      if (compaire!=dooz[x][y]) {
        return  0;
      }//if
    }//for x
      }//else
  }//for y
  winer=compaire;
  printf("checkDoozWinVerticalVector" );
  return 1;
}//checkDoozWinVerticalVector

int checkDoozWinCrisscrossRightVector(){
  int compaire;
  if(dooz[0][0]==0){
    return 0;}
    else{
  compaire=dooz[0][0];
  for (int y = 1; y <=2; y++) {
    if(compaire!=dooz[y][y]){
      return 0;
    }//if
  }//else
    }//for y
  winer=compaire;
  printf("checkDoozWinCrisscrossRightVector" );
  return 1;

}//checkDoozWinCrisscrossRightVector
int checkDoozWinCrisscrossLeftVector(){
  int compaire;
  if(dooz[2][2]==0){
    return 0;}
    else{
  compaire=dooz[2][2];
  for (int y = 2; y >=1; y--) {
    if(compaire!=dooz[y][y]){
      return 0;
    }//if
    }//for y
  }//else
  winer=compaire;
  printf("checkDoozWinCrisscrossLeftVector" );
  return 1;
}//checkDoozWinCrisscrossRightVector

int  SelectDoozHomeComputer(){
  if(levelNumberInserted==0){//  first select cell
    systemSingelinsert();
    return 1;
  }// if  level 1
    else if(levelNumberInserted=1){ //secend select cell (means in dose select second cell)
      ;
      if( selectHorizontalcellLeftToRight()==1){
        return 1;
      }//if
    }//elseif
}//SelectDoozHomeComputer

int systemSingelinsert(){
if(dooz[1][1]==0){
  dooz[1][1]=2;
  return 1;
  }//if
  else if(cellIsFull(0,0)==0)
  {
    dooz[0][0]=2;
    return 1;
  }//elseif
  return 0;
}//systemSingelinsert

int selectHorizontalcellLeftToRight(){
for (int y = 0; y <=1; y++) {
  for (int x = 0; x <= 2; x++) {
    if(dooz[x][y]==2 && dooz[x][y+1]==0){
      dooz[x][y+1]=2;
      return 1;
    }//if
  }// for i
}//for j
  return 0;
}//selectHorizontalcellLeftToRight

int setRandoms(int low, int up){
   return rand()% (up-low+1)+low;
}//function
//.یاعلی علیه السلام
