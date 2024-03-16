
#include <iostream>
#include <string>
#include <cassert>

std::string WordleResponse(std::string const & secret_word, std::string const & guess) {
    int const length_of_word = 5;
    assert(static_cast<int>(secret_word.size()) == length_of_word);
    assert(static_cast<int>(guess.size()) == length_of_word);
    
    std::string response;
    for (int location = 0; location < length_of_word; ++location) {
        char letter = guess.at(location);
        if (secret_word.at(location) == letter) {
            response.push_back(letter);
        } else if (secret_word.find(letter) != std::string::npos) {
            response.push_back('?');
        } else {
            response.push_back('.');
        }
    }
    return response;
}

int main() 
{
    std::cout << "Give me a secret word: " << std::endl;
    std::string secret_word;
    std::cin >> secret_word;
    bool correctly_guessed_word = false;
    int const total_rounds = 6; 
    for (int round = 0; round < total_rounds; ++round) {
        std::cout << "Give me a guess: " << std::endl;
        std::string guess;
        std::cin >> guess;
        if (!std::cin) {
            break;
        }

        std::string response = WordleResponse(secret_word, guess);
        std::cout << response << std::endl;
        if (secret_word == guess) {
            correctly_guessed_word = true;
            std::cout << "You Win!" << std::endl;
            break;
        } 
    }
    if (!correctly_guessed_word) {
        std::cout << "You Lose." << std::endl;
    }

    return 0;
}

// In the file Wordle/main.cpp write a program that plays a simple game of Wordle. 
// The first word provided is the secret word that the player is trying to guess. 
// Note that all words provided will be 5 letters long. After each guess, the 
// program displays the letters that were in the correct position. If the lesser 
// was present in the word but not in the right place, replace that letter with a ?, 
// else put a period if the letter isn’t present in the secret word at all. Sorry, 
// I don’t want to teach you all how to emit colorized output in this course, 
// so this will have to do. The player has 6 guess before the game ends. 
// Display the win or loss condition at the end of the game. Note that the game 
// can end early if the player provides the correct word, or if the player doesn’t 
// provide at least 6 guess (by suppling the EOF with Control-d).
// Expected input:

// HOUSE
// MOUSE
// GUESS
// TRIAL
// DOUBT
// CRAFT
// HOTTE

// Expected output:

// Give me a secret word: 
// Give me a guess: 
// .OUSE
// Give me a guess: 
// .??S?
// Give me a guess: 
// .....
// Give me a guess: 
// .OU..
// Give me a guess: 
// .....
// Give me a guess: 
// HO..E
// You Lose.

// Detailed explanation: “HOUSE” is the secret word. 
// The first guess is "MOUSE". Because “HOUSE” doesn’t have an 'M’, it is replaced with a '.’. 
// The rest of the letters match. When the try is "GUESS", The ‘U’ and the ‘E’ are 
// in the wrong position, so they become '?’. The first ‘S’ is in the right position, 
// and is shown, but the second ‘S’ is not in the right position, 
// but it is present in the secret, so it becomes a '?’.