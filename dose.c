#include<stdio.h>//                                        بسم الله  الرحمن الرحیم
#include<stdlib.h>
int dose[3][3],turn,levelNumberInserted=1,winer;
void main(int argc, char const *argv[]) {
solverdose();
}

void solverdose(){// سلام چک شود که قبل اینکه عدد وارد شود برسی شود بازی به انتها رسیده است یا خیر.یاعلی علیه السلام
  howstart();
  while (checkdoseWin()!=1 || doseEnd()!=1) {//  ویا اگر رسیده است باید به گونه ای تمام شود یاعلی علیه السلام
    if (turner()==1) {
      displaydose();
      SelectdoseHomeUser();
      turn++;

    }
     if(checkdoseWin()!=1 || doseEnd()!=1){
      if (turner()==2) {
        selectDosezHomeComputer();
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
  for (int x = 0; x <= 2; x++) {
    for (int y = 0; y <= 2; y++) {
      if(dose[x][y]==0){
        return 0;
      }
    }
  }
  return 1;
}

int checkdoseWin(){
 if (checkdoseWinHorizontalVector()==1 || checkdoseWinVerticalVector()==1 || checkDosezWinCrosshairsRightVector()==1 || checkdoseWinCrosshairsLeftVector()==1) {
    printf("%d\n  --**winer**-- =",winer );//سلام بهتره بعدا مشخص کنه کی برده
    return 1;
  }
  return 0;
}

int checkdoseWinHorizontalVector(){
  int compaire;
  for (int x = 0; x <= 2; x++) {
    if (dose[x][0]!=0 && dose[x][2]!=0) {
      compaire = dose[x][0];
        if (compaire==dose[x][1] && compaire==dose[x][2] ) {
          winer = compaire;
          return 1;
        }
          else {
            return 0;
          }
      }
    }
  }

  int checkdoseWinVerticalVector(){
    int compaire;
    for (int y = 0; y <= 2; y++) {
      if (dose[0][y]!=0 && dose[2][y]!=0) {
        compaire=dose[0][y];
        if (compaire==dose[1][y] && compaire==dose[2][y] ) {
          winer = compaire;
          return 1;
        }
          else {
            return 0;
          }
      }
    }
  }

  int checkDosezWinCrosshairsRightVector(){
    int compaire;
    if(dose[0][0]==0){
      return 0;}
      else{
        compaire=dose[0][0];
        for (int y = 0; y <= 2; y++) {
          if(compaire!=dose[y][y]){
            return 0;
          }
        }
    }
    winer=compaire;
    return 1;
  }

int checkdoseWinCrosshairsLeftVector(){
  int compaire;
  if(dose[0][2]==0){
    return 0;
  }
    else{
      compaire=dose[0][2];
      if (compaire==dose[1][1] && compaire==dose[2][0] ) {
        winer=compaire;
        return 1;
      }
        else{
          return 0;
        }
    }
}

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
        dose[i][j] = 1;
        checkTrueInsertNumber = 1;
        return 1;
      }
    } while(checkTrueInsertNumber==0);

}

int cellIsFull(int i,int j){
if(dose[i][j]==0){
  return 0;
}
  else{
    return 1;
  }
}

int  selectDosezHomeComputer(){
  if(levelNumberInserted==1){//  first select cell
    selectCellSingel();
    return 1;
   }
    else if(levelNumberInserted==2)
    {
      if (selectCellHorizontalLeftToMid()==1 || selectCellHorizontalMidToRight()==1 ||selectCellHorizontalRightToMid()==1 ||  selectCellHorizontalMidToLeft()==1 || selectCellVerticallUpToMid()==1 || selectCellVerticallMidToDown()==1 || selectCellVerticallDownToMid()==1 || selectCellVerticallMidToUp()==1 || selectCellCrosshairsToCenter()==1 || selectCellCrosshairsCenterOut()==1 || selectCellDecussateLeftToRight()==1 || selectCellDecussateRightToLeft()==1)
      {
      return 1;
      }
    }
 }

int selectCellSingel(){
  int x=0,y=0,checkTrueInsertNumber=0;
  if(cellIsFull(1,1)==0){
    dose[1][1] = 2;
    return 1;
  }
    else
    {
      do {
        x=getRandomsNumber(0,2);
        y=getRandomsNumber(0,2);
        if(cellIsFull(x,y)==0)
        {
          dose[x][y] = 2;
          checkTrueInsertNumber = 1;
        }
      } while(checkTrueInsertNumber == 0);
      return 1;
    }
}

int getRandomsNumber(int low, int up){
   return rand()% (up+low+1)+low;
}

int selectCellHorizontalLeftToMid()
{
  for (int x = 0; x <= 2; x++)
  {
    if(dose[x][0]==2 && dose[x][1]==0 && dose[x][2]==0){
      dose[x][1]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellHorizontalMidToRight()
{
  for (int x = 0; x <= 2; x++)
  {
    if(dose[x][0]==0 && dose[x][1]==2 && dose[x][2]==0){
      dose[x][2]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellHorizontalRightToMid()
{
  for (int x = 0; x <= 2; x++)
  {
    if(dose[x][2]==2 && dose[x][1]==0 && dose[x][0]==0){
      dose[x][1]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellHorizontalMidToLeft()
{
  for (int x = 0; x <= 2; x++)
  {
    if(dose[x][0]==0 && dose[x][1]==2 && dose[x][2]==0){
      dose[x][0]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellVerticallUpToMid()
{
  for (int y = 0; y <= 2; y++)
  {
    if(dose[0][y]==2 && dose[1][y]==0 && dose[2][y]==0){
      dose[1][y]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellVerticallMidToDown()
{
  for (int y = 0; y <= 2; y++)
  {
    if(dose[0][y]==0 && dose[1][y]==2 && dose[2][y]==0){
      dose[2][y]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellVerticallDownToMid()
{
  for (int y = 0; y <= 2; y++)
  {
    if(dose[2][y]==2 && dose[1][y]==0 && dose[0][y]==0){
      dose[1][y]=2;
      return 1;
    }
  }
  return 0;
}
 
int selectCellVerticallMidToUp()
{
  for (int y = 0; y <= 2; y++)
  {
    if(dose[1][y]==2 && dose[0][y]==0 && dose[2][y]==0){
      dose[0][y]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellCrosshairsToCenter() // Crosshairs move to center
{
  if(dose[1][1]==0)
  {
    if (dose[0][0]==2 && dose[2][2]==0)
    {
      dose[1][1]=2;
      return 1;
    }
    else if (dose[0][2]==2 && dose[2][0]==0) {
      dose[1][1]=2;
      return 1;
    }
    else if (dose[2][0]==2 && dose[0][2]==0) {
      dose[1][1]=2;
      return 1;
    }
    else if (dose[2][2]==2 && dose[0][0]==0) {
      dose[1][1]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellCrosshairsCenterOut() // Move Crosshairs center out
{
  if(dose[1][1]==2)
  {
    if (dose[0][0]==0 && dose[2][2]==0)
    {
      dose[0][0]=2;
      return 1;
    }
    else if (dose[0][2]==0 && dose[2][0]==0) {
      dose[0][2]=2;
      return 1;
    }
    else if (dose[2][0]==0 && dose[0][2]==0) {
      dose[2][0]=2;
      return 1;
    }
    else if (dose[2][2]==0 && dose[0][0]==0) {
      dose[2][2]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellDecussateLeftToRight()
{
  for (int x = 0; x < 3; x++) {
    if (dose[x][1]==0 && dose[x][0]==2 && dose[x][2]==0)
     {
      dose[x][2]=2;
      return 1;
    }
  }
  return  0;
}

int selectCellDecussateRightToLeft()
{
  for (int x = 0; x < 3; x++) {
    if (dose[x][1]==0 && dose[x][2]==2 && dose[x][0]==0)
     {
      dose[x][0]=2;
      return 1;
    }
  }
  return  0;
}

void displaydose(){// print a list 3*3
  for  (int x = 0;x<=2;x++){
   printf("\n");
   printf("\t");
   printf("\t");
   printf("\t");
   printf("\t");
     for (int y = 0;y<=2;y++){
       printf("%d",dose[x][y]);
       printf("\t");}
   printf("\n");
   printf("\n");}

  printf("\n");
}
