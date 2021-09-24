#include <iostream>

int returnNumber(){
    int number;
    std::cout << "Enter an integer\n";
    std::cin >> number;

    return number;
}

int main(){
 int newNumber = returnNumber();
 if (newNumber % 2 == 0){
    for (int i = 1; i <= 20; i++){
	    std::cout << "2 x " << i << " = " << 2 * i << "\n";
	   }
 } else{
     int counter =0;
     int looper =1;

     if (looper % newNumber !=0){
         counter+=1;
         std::cout << looper <<std::endl;
     }
     while (counter < 30){
        looper +=1;
	if (looper % newNumber != 0){
         counter += 1;
	 std::cout << looper << std::endl;

	}
     }
  

 }
 return 0;
}

