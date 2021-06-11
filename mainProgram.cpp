#include <iostream>
#include <ctime>


void GameIntroduction(int Difficulty) {
 /* std = namespace;   :: is the scope operator ; c out is the output stream to terminal */
    /* << is insertion operator */

    std::cout << "\n\nYou are approaching a dark corridor with a door at its end.\n";
    std::cout << "The door is locked by means of padlock with a secret combination.\n\n";
    std::cout << "You need to enter the correct combination to pass into the Level " << Difficulty;
    std::cout << " Top Secret Facility\n";
}


bool PlayGame(int Difficulty) {

    GameIntroduction(Difficulty);
    int CodeA = rand() % Difficulty + 1;
    int CodeB = rand() % Difficulty + 1;
    int CodeC = rand() % Difficulty + 1;



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

    if(SumOfCodes == GuessSum && MultipliedCodes == GuessProduct ) {
        std::cout << "\nYou found the right combination! Keep Going To Increase Danger Difficulty";
        return true; 
    } else {
        std::cout << "\nYour combination was wrong\n You'll Have To Try Again"; 
        return false;
    }

}

int main(){
    srand(time(NULL));

    int LevelDifficulty = 1;

    int const MaxDifficulty = 8;

    while(LevelDifficulty <= MaxDifficulty) {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    /* clear errors */
    std::cin.clear();
    /* discard the buffer */
   std::cin.ignore();

    if(bLevelComplete) {
        ++LevelDifficulty;
    }

    }
    std::cout << "\n Nice work. You've broken down all the padlocks on the way to the Center Of The Maze.\n";
    return 0;
}