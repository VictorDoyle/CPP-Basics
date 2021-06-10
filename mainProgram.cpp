#include <iostream>

void GameIntroduction() {
 /* std = namespace;   :: is the scope operator ; c out is the output stream to terminal */
    /* << is insertion operator */

    std::cout << "You are approaching a dark corridor with a door at its end.";
    std::cout << std::endl;
    std::cout << "The door is locked by means of padlock with a secret combination.";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "You need to enter the correct combination to pass";
    std::cout << std::endl;
}


void PlayGame() {

    GameIntroduction();
    int CodeA = 4;
    int CodeB = 12;
    int CodeC = 2;

    int SumOfCodes = CodeA + CodeB + CodeC;
    int MultipliedCodes = CodeA * CodeB * CodeC;


    std::cout << "There are three numbers to decipher the padlock\n";
    std::cout << std::endl;
    std::cout << "Markings on the wall depict the following:\n";
    std::cout << "The Three numbers multiplied return " << MultipliedCodes << std::endl;
    std::cout << "Each number adds up to " << SumOfCodes << std::endl;
    std::cout << std::endl;
    std::cout << "Type The Three Numbers To Enter Onto The Padlock\n";

    /* std::cin is the input stream, in this scenario >> character Input ; >> is extraction operator */
    int PlayerGuessA, PlayerGuessB, PlayerGuessC;
    std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;
    std::cout << "You Guessed: " << PlayerGuessA << " then " << PlayerGuessB << " and " << PlayerGuessC << std::endl;

    int GuessSum, GuessProduct;
    GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    GuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

    bool PlayerFoundPadCode = false;
    if(SumOfCodes == GuessSum && MultipliedCodes == GuessProduct ) {
        std::cout << "\nYou found the right combination!";
        PlayerFoundPadCode = true; 
    } else {
        std::cout << "\nYour combination was wrong\n"; 
        PlayerFoundPadCode = false;
    }

}

int main(){

    PlayGame();
    return 0;
}