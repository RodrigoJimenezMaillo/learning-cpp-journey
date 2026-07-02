#include <iostream>

int main(){
    std::cout << sizeof(int) << '\n';                               // int variables can sustain up to 10 digits, which is 4 bytes = 32 bits
                                                                    
    std::cout << sizeof(long int) << '\n';                          // long int variables can sustain up to 10 digits, which is 4 bytes = 32 bits. Means long int is the same as int.
                                                                    
    std::cout << sizeof(long long int) << '\n';                     // long int variables can sustain up to 19 digits, which is 8 bytes = 128 bits
                                                                    
    // std::cout << sizeof(long long long int) << '\n';                // long long long int does not exist 

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
   // std::cout << "You entered the number: " << x << '\n';
    std::cout << "The double of number " << x << " is: " << 2*x << '\n'; 
    std::cout << "The triple of number " << x << " is: " << 3*x << '\n';
    return 0;
}