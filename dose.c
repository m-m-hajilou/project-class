#include<stdio.h>//                                        بسم الله  الرحمن الرحیم
viod int main(int argc, char const *argv[]) {
  displaydooz();
}

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
}
