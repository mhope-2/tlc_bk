#include <iostream>


int main(){

    typedef std::string string_array[10];
   
    std::string s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10;

    // request for 10 words
    std::cout << "Enter 10 words" << std::endl;

   // user enters 10 words
    std::cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10;

    // store them in an array
    string_array s = {s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10};

    // assume first string has the largest size
    std::string str_with_max_length = s[0];

    // get array length
    unsigned int array_length = sizeof(s) / sizeof(s[0]);

    // iterate through the array to get string with largest size
    for (int i = 1 ; i < array_length ; i++){
        if (s[i].length() > s[i-1].length()){
            str_with_max_length = s[i];
        }
    }

    std::cout << "The string with the largest size is " << str_with_max_length << std::endl;

 return 0;
}
