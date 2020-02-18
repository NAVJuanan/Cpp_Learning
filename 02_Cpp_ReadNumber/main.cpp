/* Using "std" library
 *   std::cout <<
 *     receives data to show (output)
 *   std::cin >>
 *     sends data to save (input)
 *   std::endl
 *     new line
*/

#include <iostream>

int main()
{
    int number;

    std::cout << "Write a number between 1 and 100: ";
    std::cin >> number;
    std::cout << "The number you wrote is " << number << std::endl;

    return 0;
}
