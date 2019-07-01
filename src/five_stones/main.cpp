#include <iostream>


class stone{
  int pos[2];
  
public:
  void set_pos(int x, int y);


};

void stone::set_pos(int x, int y){
  pos[0] = x;
  pos[1] = y;

}
 


int main(){
  stone ply1, ply2;
  ply1.set_pos(5, 5);
  ply2.set_pos(1, 1);
  

  
  return 0;
}
