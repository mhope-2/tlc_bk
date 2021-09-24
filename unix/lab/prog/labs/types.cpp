#include <iostream>

int main(){
  const int my_const = 1;
  int number = 5;
  int *num_ptr = &number;
  int &int_ref {number}; 
   
  ++*num_ptr;
  ++int_ref;
 
  std::cout << "number is now " << number << std::endl;
  
  int hexnum { 0xf3f2 };
  int octnum {0437};
  int c = {'a'};

  std::cout << hexnum << " " << octnum << " " << c <<std::endl;


 return 0;	
}
