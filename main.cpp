#include <iostream>

int main()
{
    // Addition
    int number1 = 21;
    int number2 = 23;
    int sum{number1 + number2};
    int other_sum = number1 + number2 + number2;
    std::cout << "sum is  : " << sum << std::endl;
    std::cout << "other sum is : " << other_sum << std::endl;

    std::cout << std::endl;
    std::cout << "******************" << std::endl;
    // Subtraction
    int diff{number2 - number1};
    int other_diff{number1 - number2 - number2};
    std::cout << "diiff is : " << diff << std::endl;
    std::cout << "other diff is : " << other_diff << std::endl;

    std::cout << std::endl;
    std::cout << "******************" << std::endl;

    // Multiplication
    int product{number1 * number2};
    int other_product{number2 * number1 * number2};
    std::cout << "The product is : " << product << std::endl;
    std::cout << "The other product is : " << other_product << std::endl;

    std::cout << std::endl;
    std::cout << "******************" << std::endl;

    // Integer Division
    int quotient{number1 / number2};
    int other_quotient = number1 / 17;
    std::cout << "quotient : " << quotient << std::endl;
    std::cout << "outer quotient is : " << other_quotient << std::endl;
    // Modulus
    int modul = number1 % number2;
    std::cout << "modulus is : " << modul << std::endl;
    return 0;
}