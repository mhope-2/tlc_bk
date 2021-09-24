#include <iostream>

int main(){
  
   enum Lights {RED, YELLOW, AMBER = YELLOW, GREEN};
   
   //Lights red = RED;


  std::cout << AMBER << std::endl;

  return 0;
}
