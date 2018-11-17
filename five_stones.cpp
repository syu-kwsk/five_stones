#include <stdio.h>

#define NUMBER 8
int masume[NUMBER][NUMBER];
int tate;
int yoko;
int i, j, k, l, m, p, q;
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


void ply1(){
  puts("\x1b[36mPlayer1! Decide stone's position!\x1b[m ");
  printf("x1:");scanf("%d", &j);
  printf("y1:");scanf("%d", &k);
  x1 = j - 1;
  y1 = k - 1;
  if(masume[y1][x1] == O || masume[y1][x1] == X){
    puts("\n\x1b[31mWarning:stone has already put..\x1b[m\n");
    putchar('\n');
  }
  else{
    masume[y1][x1] = O;
    puts("\n\x1b[34mstone was placed.\x1b[m\n");
  }
}
void ply2(){
  puts("\x1b[36mPlayer2! Decide stone's position!\x1b[m ");
  printf("x2:");scanf("%d", &l);
  printf("y2:");scanf("%d", &m);
  x2 = l - 1;
  y2 = m - 1;
  if(masume[y2][x2] == O || masume[y2][x2] == X){
    putchar('\n');
    puts("\n\x1b[31mWarning:stone has already put..\x1b[m\n");
    
  }
  else{
    masume[y2][x2] = X;
    puts("\n\x1b[34mstone was placed.\x1b[m\n");
  }
}

void deal(){
  /*縦判定*/
  for (yoko = 0; yoko < NUMBER; yoko++){
    for (tate = 0; tate < NUMBER; tate++){
      if(masume[tate][yoko] ==     O &&
         masume[tate + 1][yoko] == O &&
         masume[tate + 2][yoko] == O &&
         masume[tate + 3][yoko] == O &&
         masume[tate + 4][yoko] == O ){
        p = 1;
        break;
      }
      else if(masume[tate][yoko] ==  X &&
              masume[tate + 1][yoko] == X &&
              masume[tate + 2][yoko] == X &&
              masume[tate + 3][yoko] == X &&
              masume[tate + 4][yoko] == X ){
        p = 2;
        break;
      }
    }
  }
 
  /*横判定*/
  for (tate = 0; tate < NUMBER; tate++){
    for (yoko = 0; yoko < NUMBER; yoko++){
      if (masume[tate][yoko] ==     O &&
          masume[tate][yoko + 1] == O &&
          masume[tate][yoko + 2] == O &&
          masume[tate][yoko + 3] == O &&
          masume[tate][yoko + 4] == O ){
        p = 1;
        break;
      }
      else if(masume[tate][yoko] ==     X &&
              masume[tate + 1][yoko] == X &&
              masume[tate + 2][yoko] == X &&
              masume[tate + 3][yoko] == X &&
              masume[tate + 4][yoko] == X ){
        p = 2;
        break;
      }
    }
  }

  /*斜右下判定*/
  for (tate = 0; tate < NUMBER; tate++){
    if (masume[tate][tate]  ==        O &&
        masume[tate + 1][tate + 1] == O &&
        masume[tate + 2][tate + 2] == O &&
        masume[tate + 3][tate + 3] == O &&
        masume[tate + 4][tate + 4] == O ){
      p = 1;
      break;
    }
    else if (masume[tate][tate]  ==        X &&
             masume[tate + 1][tate + 1] == X &&
             masume[tate + 2][tate + 2] == X &&
             masume[tate + 3][tate + 3] == X &&
             masume[tate + 4][tate + 4] == X ){
      p = 2;
      break;
    }
  }

  
  /*斜右上判定*/
  for (tate = 0; tate < NUMBER; tate++){
    for (yoko = 0; yoko < NUMBER; yoko++){
      if (masume[tate][yoko]  ==        O &&
          masume[tate + 1][yoko - 1] == O &&
          masume[tate + 2][yoko - 2] == O &&
          masume[tate + 3][yoko - 3] == O &&
          masume[tate + 4][yoko - 4] == O ){
        p = 1;
        break;
      }
      else if (masume[tate][yoko]  ==        X &&
               masume[tate + 1][yoko - 1] == X &&
               masume[tate + 2][yoko - 2] == X &&
               masume[tate + 3][yoko - 3] == X &&
               masume[tate + 4][yoko - 4] == X ){
        p = 2;
        break;
      }
    }
  }  
}

void result(){
 
  for (i = 0; i < NUMBER; i++){
    printf("%3d", i + 1);
  }
  puts("\n ------------------------");

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
  putchar('\n');

   if (p == 1){
     puts("\x1b[33mplayer1 win!\x1b[m\n");
     }
     else if (p == 2){
     puts("\x1b[33mplayer2 win!\x1b[m\n");
     }  
}

void thanks(){
  puts("Thank you for playing!\n");
}

int main(){
  make_gobann();  /*初期化*/
  puts("\x1b[36mWelcome to five-stones game!!\x1b[m\n"/*next*/
       "\x1b[36mplayer1 and player2,decide stone's position in turn.\x1b[m\n");
  
  while(1){
    ply1();      /*入力*/

    deal();      /*処理*/
    
    result();    /*出力*/

    /*終了*/
    if (p == 1){
      puts("\x1b[36mThank you for playing!\x1b[m\n");
      break ;
    }
    else if (p == 2){
      puts("\x1b[36mThank you for playing!\x1b[m\n");
      break ;
    }
    else if (p != 1 || p != 2){
      putchar('\n');
    }
    
    ply2();      /*入力*/

    deal();      /*処理*/
    
    result();    /*出力*/
    
    /*終了*/
    if (p == 1){
      puts("\x1b[36mThank you for playing!\x1b[m\n");
      break ;
    }
    else if (p == 2){
      puts("\x1b[36mThank you for playing!\x1b[m\n");
      break ;
    }
    else if (p != 1 || p != 2){
      putchar('\n');
    }
   
  } 
  return 0;
} 
    
    
