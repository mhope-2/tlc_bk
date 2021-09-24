#include <iostream>
#include <string.h>


int main() {
  
  char word[] {}; 
  std::cout << "Enter word" << std::endl;
  std::cin >> word;
  
  char *char_pointer;

  char_pointer = strtok(word, "-");
  while (char_pointer != NULL){
	  std::cout << char_pointer;
	  char_pointer = strtok(NULL, "-");
  }
	

 return 0;
}
