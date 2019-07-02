#include <stdio.h>
#include "../../include/stone.hpp"

void stone::set_pos(int x, int y){
  pos[0] = x;
  pos[1] = y;

}

int stone::get_pos(int pos_num){
  int a = pos[pos_num];
  return a;
}
