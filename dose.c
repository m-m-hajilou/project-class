#include<stdio.h>//                                        بسم الله  الرحمن الرحیم
int dose[2][2],turn,levelNumberInserted=0;
void main(int argc, char const *argv[]) {
solverdose();
}

void solverdose(){// سلام چک شود که قبل اینکه عدد وارد شود برسی شود بازی به انتها رسیده است یا خیر.یاعلی علیه السلام
  howstart();
  while (doseEnd()!=1 || checkdoseWin()!=1) {//  ویا اگر رسیده است باید به گونه ای تمام شود یاعلی علیه السلام
    if (turner()==1) {
      displaydose();
      SelectdoseHomeUser();
      turn++;

    }
     if(doseEnd()!=1 || checkdoseWin()!=1){
      if (turner()==2) {
        SelectdoseHomeComputer();
        turn++;
        levelNumberInserted++;
        displaydose();
     }
    }
  }
}

void howstart(){
  printf("\t \t \t IN THE NAME OF ALLAH \n Helo gamers \n  welcome to game dose \n  please select how starter game .\n if insertNumber = 1 your starter game or  insertNumber = 2 the computer starter game  *** for inser number in cell must your number true . the number true for select a cell and insert first insert number vertical(4<vertical>0) and then second first insert number horizontal(4<horizontal>0)***  \n \n   Let's start the game \n   \n ");
  displaydose();
  turn=getNumber(1,2);
}

int getNumber(int low,int hi){
  int inputNumber;
    //printf("%i please insert true number  the number is %s < input number > %s And the home notFull  ",low,hi);//----------------------------------سلام از اینجا درست کردن پیام اینکه  کم و زیاد در متن چاپ شود
  do{
    scanf("%d",&inputNumber);
    if(inputNumber>=low & inputNumber<=hi){
    return inputNumber;}
    printf("***error***   your number not true   ***error*** ");
  }  while (inputNumber<=low | inputNumber>=hi);
}

int doseEnd(){
  for (int x = 0; x <=2; x++) {
    for (int y = 0; y <=2; y++) {
      if(dose[x][y]==0){
        return 0;
      }
    }
  }
  return 1;
}

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
  return 1;
}//checkDoozWinCrisscrossRightVector


int turner (){
  if((turn%=2)==0){
    return 2;
  }
  if((turn%=2)==1){
    return 1;
  }
}

int SelectdoseHomeUser (){
int i,j,checkTrueInsertNumber=0;
  //if(doseEnd()!=0){
    do {
      i=getNumber(0,2);
      j=getNumber(0,2);
      if(cellIsFull(i,j)==1){
      printf("the cell is full please select a cell empty");
      }
      else if(cellIsFull(i,j)==0){
        dose[i][j]=1;
        checkTrueInsertNumber=1;
        return 1;
      }
    } while(checkTrueInsertNumber==0);

}

void displaydose(){// print a list 3*3
  for  (int x=0;x<=2;x++){
   printf("\n");
   printf("\t");
   printf("\t");
   printf("\t");
   printf("\t");
     for (int y=0;y<=2;y++){
       printf("%d",dose[x][y]);
       printf("\t");}
   printf("\n");
   printf("\n");}

  printf("\n");
}
