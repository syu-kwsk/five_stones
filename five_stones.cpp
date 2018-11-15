#include <stdio.h>

#define NUMBER 8
int masume[NUMBER][NUMBER];
int tate;
int yoko;
int i, j, k;
int x = 0;
int y = 0;
int O; //white_stone
int X; //black_stone

void make_gobann(){

  /*for (i = 0; i < NUMBER; i++){
    printf(" %2d", i + 1);
  }
  
  puts("\n  ---------------------------");
  */
  for (tate = 0;tate < NUMBER; tate++){
    /*printf("%d|", tate + 1);*/
    for(yoko = 0; yoko < NUMBER; yoko++){
      masume[yoko][tate]  =  64;
      if  (masume[yoko][tate] == 64){
        /* printf("   ");*/
      }
    }
    /* putchar('\n');*/
  } //made gobann
}
int main(){
  /*初期化*/
  make_gobann();
  
  
  /*入力*/

  puts("decide your stone's position! \n");
  printf("x:");scanf("%d", &j);
  printf("y:");scanf("%d", &k);
  x = j - 1;
  y = k - 1;
  masume[y][x] = O;

  
  /*出力*/
  puts(" ");
  for (i = 0; i < NUMBER; i++){
    printf("%3d", i + 1);
  }
  puts("\n --------------------------");

  for (tate = 0;tate < NUMBER; tate++){
    printf("%d|", tate + 1);
    for(yoko = 0; yoko < NUMBER; yoko++){
      if  (masume[tate][yoko] == masume[y][x]){
        printf("O  ");
      }
      else if (masume[tate][yoko] == 64){
        printf("B  ");
      }
          
    }
  
  putchar('\n');

  }
  
return 0;
} 
  
    
    
