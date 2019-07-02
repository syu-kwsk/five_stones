#include <iostream>

#include "../../include/stone.hpp"
 
int main(){
  stone ply1, ply2;
  ply1.set_pos(5, 4);
  ply2.set_pos(1, 1);

  std::cout << "ply1 x = " << ply1.get_pos(0) << std::endl;
  std::cout << "ply1 y = " << ply1.get_pos(1) << std::endl;
  
  return 0;
}
