#include <iostream>

int main()
{
    // Describe game rules to player
    std::cout << std::endl;
    std::cout << "Entity: 'I have been waiting for you for a thousand years'\n";
    std::cout << std::endl;
    std::cout << "Entity: 'You must enter the correct code to prove you are the chosen one'\n";

    // Declate puzzle numbers
    const int CodeA = 3;
    const int CodeB = 7;
    const int CodeC = 8;
    
    /**
     * Multi-line comments
    **/
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Present puzzle to player
    std::cout << std::endl;
    std::cout << "Enter 3 numbers which will equal the values below: " << std::endl;
    std::cout << "The 3 numbers add up to: " << CodeSum << std::endl;

    std::cout << "The 3 numbers multiplied together equal: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cout << "Please enter your first number: ";
    std::cin >> GuessA;
    std::cout << "Please enter your second number: ";
    std::cin >> GuessB;
    std::cout << "Please enter your third number: ";
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << std::endl << "Entity: Well done, you are proving yourself worthy" << std::endl;
    } else {
        std::cout << std::endl << "Entity: You fool! I was sure you were the chosen one.";
    }

    return 0;
}