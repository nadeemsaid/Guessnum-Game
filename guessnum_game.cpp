#include <iostream>

int main ();

int main () {
int secret_number {};
std::cout << "Please enter your secret number: ";
std::cin >> secret_number;

while (true) {
  int guessed_number {};
  std::cout << "Please guess the secret number: ";
  std::cin >> guessed_number;

  if (secret_number == guessed_number) {
    std::cout << "Congratulations! You have guessed the secret number.\n";
    std::cout << secret_number << "\n";
    std::cout << "We hope you enjoyed the game, see you next time :)";
    break;
  }

  else if (guessed_number < secret_number) {
    std::cout << "Your guess is too low" << std::endl;
  }

  else if (guessed_number > secret_number) {
    std::cout << "Your guess is too high" << std::endl;
  }

    else {
      std::cout << "Sorry, your guess was incorrect. Please enter 1 for another try, or 0 to say bye bye: ";
      bool is_true{};
      std::cin >> is_true;

        if (is_true == 1) {
          if (secret_number == guessed_number) {
    std::cout << "Congratulations! You have guessed the secret number " << secret_number;
    break;
  }
        }
        else {
          std::cout << "We hope you enjoyed the SAID game, see you next time :)";
      break;
    }

  }
}

  return 0;
}

