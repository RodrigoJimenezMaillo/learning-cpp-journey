#include <iostream>                         // Input - Output stream. It is needed to use cout, cin, endl...

int main() {
    std::cout << 6.2 << std::endl;
    std::cout << 5 << std::endl;
    std::cout << "H\n";
    std::cout << "Hello\n"; // << std::endl; 

    std::cout << "\n" << std::endl;
{

    int width;
    width = 5; // same as: int widt=5
    std::cout << "First width equals: " << width << std::endl;          // USING std::endl is less efficent than using "\n" at the end because endl flushes the buffer and "\n" doesnt

    width = 7;
    std:: cout << "Second width equals: " << width << std::endl;
}

    int temp1 {5};                          // RECOMENDED WAY OF INITIATING A VARIABLE. Entering a decimal will trigger an error
    std::cout << temp1 << std::endl;
    int temp2 = 15;                         // USED FOR SIMPLE VARIABLES BUT CAN CAUSE PROBLEMS. OLD FORMAT. Entering a decimal wont trigger an error, it truncates the value
    std::cout << temp2 << std::endl;
    int temp3 (25);                         // USED MOSTLY FOR OBJECTS CONSTRUCTORS RATHER THAN VARIABLES. Entering a decimal wont trigger an error, it truncates the value
    std::cout << temp3 << std::endl;
 {
    int x {};
    std::cin >> x;                                          // WHEN USING CIN, WE USE >> NOT <<. If i enter a decimal number, it will truncate it rather than trigger an error.
    std::cout << "The value of x = " << x << std::endl;     // WHEN USING COUT, WE USE << NOT >>
} 

    int x{} ,  y{};
    std::cout << "Enter the values of x and y \n";
    std::cin >> x >> y;                                                                     // This behaves as a FIFO queue
    std::cout << "You entered the values of x = " << x << " and y = " << y << '\n';
    return 0;
}