#include <stdio.h>

#define NUMBER 8
 int masume[NUMBER][NUMBER];
  int tate;
  int yoko;
  int i;

void make_gobann(){ for (i = 0; i < NUMBER; i++){
    printf("%3d", i + 1);
  }
  
  puts("\n  ________________________");

  for (tate = 0;tate < NUMBER; tate++){
    printf("%d |", tate + 1);
    for(yoko = 0; yoko < NUMBER; yoko++){
      masume[yoko][tate]  =  64;
      if  (masume[yoko][tate] == 64){
        printf("   ");
      }
    }
    putchar('\n');
  } //made gobann
}
int main(){
    
  make_gobann();//made gobann
 
 
  return 0;
} 
  
    
    
