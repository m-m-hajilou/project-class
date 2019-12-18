#include <stdio.h>
   int a[3][3],empty;
int setRandoms(int low, int up){
   return rand()% (up+low+1)+low;
}

char setPrintArraye(){//print array as a table 3*3(as 2048)
   for  (int x=0;x<=2;x++){
      printf("\n");
      for (int y=0;y<=2;y++){
         printf("\t");
         printf("\t");
         printf("%d",a[x][y]);
         printf("\t");} //fory
         printf("\n");} // for x
         printf("\n");
}

void setAllnumberArrayeZero(){
   for (int iyt=0;iyt<=3;iyt++){
      for (int ixt=0;ixt<=3;ixt++)
         a[ixt][iyt]=0;}
}

int setInsertNumberTowInRandomLocationIsEmpty(){
   int number=2,x,y,cunters=0;
      start:  // search location empty for insert number two
      x=setRandoms(0,2);
      y=setRandoms(0,2);
      if(a[x][y]==0) {
         a[x][y]=number;
         goto finish;}// If a vacancy is found
      goto start;// If a vacancy is  not found

      finish:;//label If a vacancy is found
}
void setMoveUpArraye(){ // if press 8(move up)
   for (int y=0;y<=2;y++)
      for  (int x=0;x<=1;x++){
         if((a[x+1][y]!=0 && a[x][y]!=0) && ((a[x+1][y]/a[x][y])==1)){//sumer cells
            a[x][y]+=a[x+1][y];
            a[x+1][y]=0;
            }// if
         if(a[x][y]==0){ //Zero forward movement
            a[x][y]=a[x+1][y];
            a[x+1][y]=0;
}
}
}
void setMoveDownArraye(){ // if press 2
   for  (int x=1;x>=0;x--)
      for (int y=0;y<=2;y++){
         if((a[x+1][y]!=0 && a[x][y]!=0) && ((a[x][y]/a[x+1][y])==1)){ // sumer cells
            a[x+1][y]+=a[x][y];
            a[x][y]=0;
            }//if
         if(a[x+1][y]==0){//Zero forward movement
            a[x+1][y]=a[x][y];
            a[x][y]=0;
}
}
}
void setMoveLeftArraye(){ // if press 4
   for  (int x=0;x<=2;x++)
      for (int y=0;y<=1;y++){
         if((a[x][y+1]!=0 && a[x][y]!=0) && ((a[x][y+1]/a[x][y])==1)){//sumer cells
         a[x][y]+=a[x][y+1];
         a[x][y+1]=0;
}

       if(a[x][y]==0){//Zero forward movement
          a[x][y]=a[x][y+1];
          a[x][y+1]=0;
}
}
}

void setMoveRightArraye(){ // if press 6
   for  (int x=0;x<=2;x++)
      for (int y=1;y>=0;y--){
         if((a[x][y+1]!=0 && a[x][y]!=0) && ((a[x][y+1]/a[x][y])==1)){//sumer cells
            a[x][y+1]+=a[x][y];
            a[x][y]=0;
}
         if(a[x][y+1]==0){//Zero forward movement
            a[x][y+1]=a[x][y];
            a[x][y]=0;
}
}
}
int main(){
   int comparator,nWhile;//  nWhile Endless loop
   printf("IN THE NAME OF ALLAH");
   printf("\n");
   printf("WelCome to 2048 . please insert number 8(move up),4(move left),2(move down),6(move right) for move in game");
   printf("\n");
   printf("\n");
   setInsertNumberTowInRandomLocationIsEmpty();//insetr number 2 in game start
   startmain:
   setPrintArraye();
   scanf("%i",&comparator);
   while (nWhile>1){//Endless loop
      if(comparator==8){//up
         setMoveUpArraye();
         setInsertNumberTowInRandomLocationIsEmpty();
         setPrintArraye ();
         scanf("%i",&comparator);
}

   if(comparator==2){//MoveDown
      setMoveDownArraye();
      setInsertNumberTowInRandomLocationIsEmpty();
      setPrintArraye ();
      scanf("%i",&comparator);
}
     if(comparator==4){//Move Left
        setMoveLeftArraye();
        setInsertNumberTowInRandomLocationIsEmpty();
        setPrintArraye ();
        scanf("%i",&comparator);
}

     if(comparator==6){//Move Right
        setMoveRightArraye();
        setInsertNumberTowInRandomLocationIsEmpty();
        setPrintArraye ();
        scanf("%i",&comparator);
}

    if(comparator!=2&&comparator!=4&&comparator!=6&&comparator!=8){//If the entry was wrong
       printf("\n""insert true number""\n");
       goto startmain;//move to label for game continu
}
}
    return 0;
}//main
