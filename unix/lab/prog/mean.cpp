#include <iostream>
using namespace std;

int main(){
   int num1, num2, num3, num4, num5;
   cout<< "Enter 5 integers" << endl;
   cin >> num1 >> num2 >> num3 >> num4 >> num5;
   
   int int_array[5] = {num1, num2, num3, num4, num5};
   int arraySize = sizeof(int_array)/sizeof(int_array[0]);
   int arraySum = 0;
   double mean;

   for (int i =0; i < arraySize; i++){
	   arraySum += int_array[i];
   }
   mean = float(arraySum) / float(arraySize);
   cout << "\nThe mean of the 5 numbers is " << mean << endl;

    return 0;

}










