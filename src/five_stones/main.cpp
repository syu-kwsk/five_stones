#include <iostream>

class stone{
  int pos[2];
  
public:
  void set_pos(int x, int y);
  int get_pos(int pos_num);


};

void stone::set_pos(int x, int y){
  pos[0] = x;
  pos[1] = y;

}

int stone::get_pos(int pos_num){
  int a = pos[pos_num];
  return a;
}
 

int main(){
  stone ply1, ply2;
  ply1.set_pos(5, 4);
  ply2.set_pos(1, 1);

  std::cout << "ply1 x = " << ply1.get_pos(0) << std::endl;
  std::cout << "ply1 y = " << ply1.get_pos(1) << std::endl;
  
  return 0;
}
