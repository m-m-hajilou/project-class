#include <stdio.h>
   int a[3][3],empty;
int setRandoms(int low, int up){
   return rand()% (up+low+1)+low;
}//function

char setPrintArraye(){//print array as a table 3*3(as 2048)
   for  (int x=0;x<=2;x++){ //print number horizental      
      printf("\n");
      for (int y=0;y<=2;y++){//print number vertical    
         printf("\t");  
         printf("\t");
         printf("%d",a[x][y]);
         printf("\t");} //fory
         printf("\n");} // for x
         printf("\n");
}//function
void setClearArraye(){// clean number in arraye 
   for (int iyt=0;iyt<=3;iyt++){
      for (int ixt=0;ixt<=3;ixt++)
         a[ixt][iyt]=0;}     
}//function
int setInsertNumber(){ //insert  random number  in location empty
   int number=2,x,y,cunters=0;
      start:  // search location for insert zero   
      x=setRandoms(0,2);//number random for horizental
      y=setRandoms(0,2);//number random for vertical
      if(a[x][y]==0) {    
         a[x][y]=number; 
         goto finish;}// If a vacancy is found
      goto start;// If a vacancy is  not found 

      finish:;//label If a vacancy is found
}//function
void setUpArraye(){ // if press 8(move up)
   for (int y=0;y<=2;y++)
      for  (int x=0;x<=1;x++){
         if((a[x+1][y]!=0 && a[x][y]!=0) && ((a[x+1][y]/a[x][y])==1)){//sumer cells
            a[x][y]+=a[x+1][y];
            a[x+1][y]=0;
            }// if
         if(a[x][y]==0){ //Zero forward movement
            a[x][y]=a[x+1][y];
            a[x+1][y]=0;  
}//if
}//for y
} //function
void setDownArraye(){ // if press 2 (move down)
   for  (int x=1;x>=0;x--)	
      for (int y=0;y<=2;y++){
         if((a[x+1][y]!=0 && a[x][y]!=0) && ((a[x][y]/a[x+1][y])==1)){ // sumer cells
            a[x+1][y]+=a[x][y];
            a[x][y]=0;    
            }//if
         if(a[x+1][y]==0){//Zero forward movement
            a[x+1][y]=a[x][y];
            a[x][y]=0;
}//if
}//for y
} //function
void setLeftArraye(){ // if press 4(mov left)
   for  (int x=0;x<=2;x++)	
      for (int y=0;y<=1;y++){
         if((a[x][y+1]!=0 && a[x][y]!=0) && ((a[x][y+1]/a[x][y])==1)){//sumer cells
         a[x][y]+=a[x][y+1];
         a[x][y+1]=0;    
}//if

       if(a[x][y]==0){//Zero forward movement
          a[x][y]=a[x][y+1];
          a[x][y+1]=0;
}//if   
}//for y
} // for function

void setRightArraye(){ // if press 6(mov right)
   for  (int x=0;x<=2;x++)	
      for (int y=1;y>=0;y--){
         if((a[x][y+1]!=0 && a[x][y]!=0) && ((a[x][y+1]/a[x][y])==1)){//sumer cells
            a[x][y+1]+=a[x][y];
            a[x][y]=0;    
}//if
         if(a[x][y+1]==0){//Zero forward movement
            a[x][y+1]=a[x][y];
            a[x][y]=0;
}//if
}//for y
} //function
int main(){    
   int c,nWhile;// c=comparator & nWhile Endless loop
   printf("IN THE NAME OF ALLAH");
   printf("\n");
   printf("WelCome to 2048 . please insert number 8(move up),4(move left),2(move down),6(move right) for move in game");
   printf("\n");
   printf("\n");
   setInsertNumber();//insetr number 2 in game start
   startmain:
   setPrintArraye();
   scanf("%i",&c); //input number for comparison
   while (nWhile>1){//Endless loop
      if(c==8){//up
         setUpArraye();//move up           
         setInsertNumber();//insert new number fo countinu game
         setPrintArraye ();//show 2048 for continu
         scanf("%i",&c);//input number for comparison & countinu
}//if   

   if(c==2){//MoveDown
      setDownArraye();           
      setInsertNumber();
      setPrintArraye ();
      scanf("%i",&c);
}//if 
     if(c==4){//Move Left
        setLeftArraye();           
        setInsertNumber();
        setPrintArraye ();
        scanf("%i",&c);
}//if 

     if(c==6){//Move Right
        setRightArraye();           
        setInsertNumber();
        setPrintArraye ();
        scanf("%i",&c);
}//if
    
    if(c!=2&&c!=4&&c!=6&&c!=8){//If the entry was wrong
       printf("\n""insert true number""\n");
       goto startmain;//move to label for game continu
}//if
}//while
    return 0;
}//main
