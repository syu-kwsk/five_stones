#include <stdio.h>

#define NUMBER 8
int masume[NUMBER][NUMBER];
int tate;
int yoko;
int i, j, k, l, m;
int x1 = 0, x2 = 0;
int y1 = 0, y2 = 0;
enum{
  O, X, B
};
void make_gobann(){
  
  for (tate = 0;tate < NUMBER; tate++){
    for(yoko = 0; yoko < NUMBER; yoko++){
      masume[tate][yoko]  =  B;
    }
  } //made gobann
}

void result(){
  for (i = 0; i < NUMBER; i++){
    printf("%3d", i + 1);
  }
  puts("\n --------------------------");

  for (tate = 0;tate < NUMBER; tate++){
    printf("%d|", tate + 1);
    for(yoko = 0; yoko < NUMBER; yoko++){

      if  (masume[tate][yoko] == O){
        printf("O  ");
      }
      else if (masume[tate][yoko] == X){
        printf("X  ");
      }
      else if (masume[tate][yoko] == B){
        printf("+  ");
      }      
    }
    putchar('\n');
  }
}

void ply1(){
  puts("Player1! Decide stone's position! \n");
  printf("x1:");scanf("%d", &j);
  printf("y1:");scanf("%d", &k);
  x1 = j - 1;
  y1 = k - 1;
  masume[y1][x1] = O;
}

void ply2(){
  puts("Player2! Decide stone's position! \n");
  printf("x2:");scanf("%d", &l);
  printf("y2:");scanf("%d", &m);
  x2 = l - 1;
  y2 = m - 1;
  masume[y2][x2] = X;
}
int main(){
  make_gobann();  /*初期化*/
  
  while(1){
    ply1();      /*入力*/

    result();    /*出力*/
    
    ply2();      /*入力*/
  
    result();    /*出力*/
    
  }
  return 0;
} 
  
    
    
