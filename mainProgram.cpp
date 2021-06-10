#include <iostream>

int main(){
    /* std = namespace;   :: is the scope operator ; c out is the output stream to terminal */
    /* << is insertion operator */
    std::cout << "You are approaching a dark corridor with a door at its end.";
    std::cout << std::endl;
    std::cout << "The door is locked by means of padlock with a secret combination.";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "You need to enter the correct combination to pass";
    std::cout << std::endl;

    int CodeA = 4;
    int CodeB = 12;
    int CodeC = 2;

    int SumOfCodes = CodeA + CodeB + CodeC;
    int MultipliedCodes = CodeA * CodeB * CodeC;


    std::cout << "There are three numbers to decipher the padlock" << std::endl;
    std::cout << std::endl;
    std::cout << "Markings on the wall depict the following:";
    std::cout << std::endl;
    std::cout << "The Three numbers multiplied return " << MultipliedCodes << std::endl;
    std::cout << "Each number adds up to " << SumOfCodes << std::endl;
    std::cout << std::endl;
    std::cout << "Type The Three Numbers To Enter Onto The Padlock" << std::endl;

    /* std::cin is the input stream, in this scenario >> character Input ; >> is extraction operator */
    int PlayerGuessA, PlayerGuessB, PlayerGuessC;
    std::cin >> PlayerGuessA;
    std::cin >> PlayerGuessB;
    std::cin >> PlayerGuessC;
    std::cout << "You Guessed: " << PlayerGuessA << " then " << PlayerGuessB << " and " << PlayerGuessC;

    int GuessSum, GuessProduct;
    GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    GuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

    bool PlayerFoundPadCode;
    if(SumOfCodes == GuessSum && MultipliedCodes == GuessProduct ) {
        std::cout << "You found the right combination!";
        return PlayerFoundPadCode = true; 
    } else {
        std::cout << "Your combination was wrong" << std::endl; 
        return PlayerFoundPadCode = false;
    }


    return 0;
}