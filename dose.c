#include<stdio.h>//                                        بسم الله  الرحمن الرحیم
#include<stdlib.h>
int dose[3][3],turn,levelNumberInserted=1,winer=0;
void main(int argc, char const *argv[])
{
solverdose();
}

void solverdose(){
  howstart();
  while (checkdoseWin()==0 && doseEnd()==0)
  {
    if (turner()==1)
    {
    displaydose(3,3,dose);
      SelectdoseHomeUser();
      turn++;
    }
     if(checkdoseWin()!=1 && doseEnd()!=1)
     {
      if (turner()==2)
      {
        controlSelectDoseHomeComputer();
        turn++;
        levelNumberInserted++;
      displaydose(3,3,dose);
      }
    }
  }
displaydose(3,3,dose);
  printWinerOrMessagefinishDose();
}

void howstart()
{
  printf("\t \t \t IN THE NAME OF ALLAH \n Helo gamers \n  welcome to game dose \n  please select how starter game .\n if insertNumber = 1 your starter game or  insertNumber = 2 the computer starter game  *** for select cell must your number true . the number true for select a cell and insert first: insert number vertical(0<=vertical<=2) and then second  insert number horizontal(0<=horizontal<=2)***  \n \n   Let's start the game \n   \n ");
displaydose(3,3,dose);
  turn=getNumber(1,2);
}

int getNumber(int low,int hi)
{
  int inputNumber;
    printf(" please insert true number  the number is %d <= input number >= %d And the home notFull \n \n ",low,hi);
  do
  {
    scanf("%d",&inputNumber);
    if(inputNumber>=low & inputNumber<=hi)
    {
    return inputNumber;
    }
    printf("***error***   your number not true   ***error*** ");
  }  while (inputNumber<=low | inputNumber>=hi);
}

int doseEnd()
{
  for (int x = 0; x <= 2; x++)
  {
    for (int y = 0; y <= 2; y++)
    {
      if(dose[x][y]==0)
      {
        return 0;
      }
    }
  }
  return 1;
}

int checkdoseWin()
{
 if (checkdoseWinHorizontalVector()==1 || checkdoseWinVerticalVector()==1 || checkDosezWinCrosshairsRightVector()==1 || checkdoseWinCrosshairsLeftVector()==1)
 {
   return 1;
 }
return 0;
}

int checkdoseWinHorizontalVector()
{
  int compaire;
  for (int x = 0; x <= 2; x++)
  {
    if (dose[x][0]!=0 && dose[x][2]!=0)
    {
      compaire = dose[x][0];
        if (compaire==dose[x][1] && compaire==dose[x][2] )
        {
          winer = compaire;
          return 1;
        }
          else {
            return 0;
          }
      }
    }
  }

  int checkdoseWinVerticalVector()
  {
    int compaire;
    for (int y = 0; y <= 2; y++)
    {
      if (dose[0][y]!=0 && dose[2][y]!=0)
      {
        compaire=dose[0][y];
        if (compaire==dose[1][y] && compaire==dose[2][y] )
        {
          winer = compaire;
          return 1;
        }
          else {
            return 0;
          }
      }
    }
  }

  int checkDosezWinCrosshairsRightVector()
  {
    int compaire;
    if(dose[0][0]==0)
    {
      return 0;
    }
      else
      {
        compaire=dose[0][0];
        for (int y = 0; y <= 2; y++)
        {
          if(compaire!=dose[y][y])
          {
            return 0;
          }
        }
    }
    winer=compaire;
    return 1;
  }

int checkdoseWinCrosshairsLeftVector()
{
  int compaire;
  if(dose[0][2]==0)
  {
    return 0;
  }
    else{
      compaire=dose[0][2];
      if (compaire==dose[1][1] && compaire==dose[2][0] )
      {
        winer=compaire;
        return 1;
      }
        else
        {
          return 0;
        }
    }
}

int turner ()
{
  if((turn%=2)==0)
  {
    return 2;
  }
  if((turn%=2)==1)
  {
    return 1;
  }
}

int SelectdoseHomeUser ()
{
int i,j,checkTrueInsertNumber=0;
    do {
      printf("insert number horizontal:  ");
      i=getNumber(0,2);
      printf("insert number vertical:  ");
      j=getNumber(0,2);
      if(cellIsFull(i,j)==1)
      {
      printf("the cell is full please select a cell empty \n \n");
      }
      else if(cellIsFull(i,j)==0)
      {
        dose[i][j] = 1;
        checkTrueInsertNumber = 1;
        return 1;
      }
    } while(checkTrueInsertNumber==0);

}

int cellIsFull(int i,int j)
{
  if(dose[i][j]==0)
  {
    return 0;
  }
    else{
      return 1;
    }
}
int controlSelectDoseHomeComputer()//changerLevel for selectCell  please read command  selectDoseHomeComputer()
{
  if(selectDoseHomeComputer()==1)
  {
    return 1;
  }
    else
    {
      levelNumberInserted --;
      if(selectDoseHomeComputer()==1)
      {
        return 1 ;
      }
        else
        {
          slecetCellJustempty();//just for end game
        }
    }
}

int  selectDoseHomeComputer()
{
  if(levelNumberInserted==1)//  first select cell
  {
    selectCellSingel();
    return 1;
  }
    else if(levelNumberInserted==2)//selectCell For Before win
    {
      if (selectCellHorizontalLeftToMid()==1 || selectCellHorizontalMidToRight()==1 || selectCellHorizontalRightToMid()==1 ||  selectCellHorizontalMidToLeft()==1 || selectCellVerticallUpToMid()==1 || selectCellVerticallMidToDown()==1 || selectCellVerticallDownToMid()==1 || selectCellVerticallMidToUp()==1 || selectCellCrosshairsToCenter()==1 || selectCellCrosshairsCenterOut()==1 || selectCellDecussateLeftToRight()==1 || selectCellDecussateRightToLeft()==1 || selectCellDecussateUpToDown()==1 || selectCellDecussateDownToUp()==1 || selecetCellEmptyRow()==1 || selecetCellEmptyColumn()==1 || selectCellCrosshairsDecussateUpRightToDownLeft()==1 || selectCellCrosshairsDecussateDownRightToUpLeft()==1 || selecCellCrosshairsDecussateUpLeftToDownRight()==1 || selecCellCrosshairsDecussateDownLeftToUpRight()==1)
      {
      return 1;
      }
    }
       else if(levelNumberInserted==3)//selectCell But Just For Win or not win
       {
         if(slecetCellForwin()==1 || slecetCellForNotWinUser()==1)
         {
           return 1;
         }
       }
    return 0;
 }

int selectCellSingel()
{
  int x=0,y=0,checkTrueInsertNumber=0;
  if(cellIsFull(1,1)==0)
  {
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

//"*read cooment for discover move . dose have up: {(0,0),(0,1),(0,2)} down :{(2,0),(2,1),(2,2)} left :{(0,0),(1,0),(2,0)} right :{(0,2),(1,2),(2,2)} mid :{(0,1),(1,1),(2,1)}*"

int getRandomsNumber(int low, int up)
{
   return rand()% (up+low+1)+low;
}

int selectCellHorizontalLeftToMid()
{
  for (int x = 0; x <= 2; x++)
  {
    if(dose[x][0]==2 && dose[x][1]==0 && dose[x][2]==0)
    {
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
    if(dose[x][0]==0 && dose[x][1]==2 && dose[x][2]==0)
    {
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
    if(dose[x][2]==2 && dose[x][1]==0 && dose[x][0]==0)
    {
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
    if(dose[x][0]==0 && dose[x][1]==2 && dose[x][2]==0)
    {
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
    if(dose[0][y]==2 && dose[1][y]==0 && dose[2][y]==0)
    {
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
    if(dose[2][y]==2 && dose[1][y]==0 && dose[0][y]==0)
    {
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
    if(dose[1][y]==2 && dose[0][y]==0 && dose[2][y]==0)
    {
      dose[0][y]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellCrosshairsToCenter() // Crosshairs move corner to center
{
  if(dose[1][1]==0)
  {
    if (dose[0][0]==2 && dose[2][2]==0)
    {
      dose[1][1]=2;
      return 1;
    }
    else if (dose[0][2]==2 && dose[2][0]==0)
    {
      dose[1][1]=2;
      return 1;
    }
    else if (dose[2][0]==2 && dose[0][2]==0)
    {
      dose[1][1]=2;
      return 1;
    }
    else if (dose[2][2]==2 && dose[0][0]==0)
    {
      dose[1][1]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellCrosshairsCenterOut() // Move Crosshairs center to corner
{
  if(dose[1][1]==2)
  {
    if (dose[0][0]==0 && dose[2][2]==0)
    {
      dose[0][0]=2;
      return 1;
    }
    else if (dose[0][2]==0 && dose[2][0]==0)
    {
      dose[0][2]=2;
      return 1;
    }
    else if (dose[2][0]==0 && dose[0][2]==0)
    {
      dose[2][0]=2;
      return 1;
    }
    else if (dose[2][2]==0 && dose[0][0]==0)
    {
      dose[2][2]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellDecussateLeftToRight()
{
  for (int x = 0; x < 3; x++)
  {
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

int selectCellDecussateUpToDown()
{
  for (int y = 0; y < 3; y++)
  {
    if (dose[1][y]==0 && dose[0][y]==2 && dose[2][y]==0)
     {
      dose[2][y]=2;
      return 1;
    }
  }
  return  0;
}

int selectCellDecussateDownToUp()
{
  for (int y = 0; y < 3; y++)
  {
    if (dose[1][y]==0 && dose[2][y]==2 && dose[0][y]==0)
     {
      dose[0][y]=2;
      return 1;
    }
  }
  return  0;
}
int selecetCellEmptyRow()
{
  int rand;
  for (int x = 0; x < 3 ; x++)
  {
    if (dose[x][0]==0 && dose[x][1]==0 && dose[x][2]==0)
    {
      rand=getRandomsNumber(0,2);
      dose[x][rand]=2;
      return 1;
    }
  }
  return 0;
}

int selecetCellEmptyColumn()
{
  int rand;
  for (int y = 0; y < 3 ; y++)
  {
    if (dose[0][y]==0 && dose[1][y]==0 && dose[2][y]==0)
    {
      rand=getRandomsNumber(0,2);
      dose[rand][y]=2;
      return 1;
    }
  }
  return 0;
}

int selectCellCrosshairsDecussateUpRightToDownLeft()
{
  if(dose[1][1]==0 && dose[0][0]==2 && dose[2][2]==0)
  {
    dose[2][2]=2;
    return 1;
  }
  return 0;
}

int selectCellCrosshairsDecussateDownRightToUpLeft()
{
  if(dose[1][1]==0 && dose[2][0]==2 && dose[0][2]==0)
  {
    dose[0][2]=2;
    return 1;
  }
  return 0;
}

int selecCellCrosshairsDecussateUpLeftToDownRight()
{
  if(dose[1][1]==0 && dose[0][2]==2 && dose[2][0]==0)
  {
    dose[2][0]=2;
    return 1;
  }
  return 0;
}

int selecCellCrosshairsDecussateDownLeftToUpRight()
{
  if(dose[1][1]==0 && dose[2][2]==2 && dose[0][0]==0)
  {
    dose[0][0]=2;
    return 1;
  }
  return 0;
}

int slecetCellJustempty()
{
  for  (int x = 0;x<=2;x++)
  {
    for  (int y = 0; y<=2; y++)
    {
      if (dose[x][y]== 0)
      {
        dose[x][y]=2;
        return 1;
      }
    }
  }
  return 0;
}

int slecetCellForwin()
{
  for  (int x = 0;x<=2;x++)
  {
    for  (int y = 0; y<=2; y++)
    {
      if(cellIsFull(x,y)==0)
      {
        dose[x][y]=2;
        if(checkdoseWin()==1)
        {
          return 1;
        }
          else
          {
            dose[x][y]=0;
          }
        }
    }
  }
  return 0;
}

int slecetCellForNotWinUser()
{
  for  (int x = 0;x<=2;x++)
  {
    for  (int y = 0; y<=2; y++)
    {
      if(cellIsFull(x,y)==0)
      {
        dose[x][y]=1;
        if(checkdoseWin()==1)
        {
          dose[x][y]=2;
          return 1;
        }
          else
          {
            dose[x][y]=0;
          }
        }
    }
  }
  return 0;
}

void displaydose(int horizontal,int vertical,int array [horizontal][vertical]){// print a list 3*3
  for  (int x = 0;x<=2;x++)
  {
   printf("\n");
   printf("\t");
   printf("\t");
   printf("\t");
   printf("\t");
     for (int y = 0;y<=2;y++)
     {
       printf("%d",array[x][y]);
       printf("\t");
     }
   printf("\n");
   printf("\n");}

  printf("\n");
}

int printWinerOrMessagefinishDose()
{
  if(calculaterWiner()==0)
  {
    printf("%s\n"," IN THE NAME OF ALLAH \n the game finish but not winer.if you want winer then again disport dose (-:) \n Ya ALi" );
  }
    else if(calculaterWiner()==1)
    {
      if(winer==1)
      {
        printf("%s\n"," IN THE NAME OF ALLAH \n the game finish but Your Winer.if you want winer again then disport dose (-:) \n YA ALi" );
      }
        else if(winer==2)
        {
          printf("%s\n"," IN THE NAME OF ALLAH \n the game finish but Your not Winer.if you want winer  then again disport dose (-:) \n YA ALi" );
        }
    }
}

int calculaterWiner()
{
  if(checkdoseWin()==0 && doseEnd()==1)
  {
    return 0;
  }
    else if(checkdoseWin()==1)
    {
      return 1;
    }
}
