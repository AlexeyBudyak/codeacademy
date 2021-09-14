#include <iostream>
#include "ufo_functions.hpp"

int main() {
  std::string codeword = "codeacademy";
  std::string answer =   "___________";
  std::vector<char> incorrect;
  bool guess = false;
  char letter;
  int misses = 0;

  greet();

  while(answer != codeword && misses < 7){
    std::cout << "\n\nPlease enter your guess: ";
    std::cin >> letter;

    for(int i = 0; i < codeword.length(); i++){
      if(codeword[i] == letter){
        answer[i] = letter;
        guess = true;
      }
    }

    if (guess) {
  std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
    } else {    
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    display_status(incorrect, answer);
    display_misses(misses);
    guess = false;
  }

  end_game(answer, codeword);
  return 0;
}
