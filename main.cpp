// finds the average temperature from a list of temperatures
// code by Ryuya Hirota

#include <iostream>

int main() {
    double temperatures = 0;
    double input;
    int count = 0;
    
    // get inputs while valid numbers are being inputted
    std::cout << "Input Temperature (q to end input):" << std::endl;
    while (std::cin >> input) {
        temperatures += input;
        ++count;
    }
    
    temperatures /= count > 0 ? count : 1;
    std::cout << "The average for the temperatures you inputted is " << temperatures << " degrees." << std::endl;
    
    return 0;
}
