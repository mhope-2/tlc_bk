#include <iostream>


int main(){

    using s = std::string;

    s string_array[10] {};
   
    s s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10;

    // request for 10 words
    std::cout << "Enter 10 words" << std::endl;

   // user enters 10 words
    std::cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10;

    // store them in an array
    // string_array = {s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10};
    string_array[0] = s1;
    string_array[1] = s2;
    string_array[2] = s3;
    string_array[3] = s4;
    string_array[4] = s5;
    string_array[5] = s6;
    string_array[6] = s7;
    string_array[7] = s8;
    string_array[8] = s9;
    string_array[9] = s10;

    // assume first string has the largest size
    std::string str_with_max_length = string_array[0];

    // get array length
    unsigned int array_length = sizeof(string_array) / sizeof(string_array[0]);

    // iterate through the array to get string with largest size
    for (int i = 1 ; i < array_length ; i++){
        if (string_array[i].length() > string_array[i-1].length()){
            str_with_max_length = string_array[i];
        }
    }

    std::cout << "The string with the largest size is " << str_with_max_length << std::endl;

 return 0;
}
