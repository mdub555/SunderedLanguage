#include <iostream>
#include <string>
#include <map>
#include <limits>
#include "Translator.hpp"
#include "UserChoice.hpp"

Translator::Translator() {
   mapFileName = "Map.txt";
}

Translator::Translator(std::string mapFileName) {
   this->mapFileName = mapFileName;
}

void Translator::readMap(std::string filename) {
   return;
}

void Translator::getInput() {
   std::cout << "Enter the string to translate: ";
   getline(std::cin, original);

   int input = -1;
   while (input < UserChoice::TO_ENGLISH || input > UserChoice::TO_ELDER) {
      std::cout << "1) To English\n"
                << "2) To Elder\n"
                << ">> ";
      std::cin >> input;
      if (std::cin.fail()) {
         std::cout << "Bad input, you didn't input a number." << std::endl;
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      } else if (input < UserChoice::TO_ENGLISH || input > UserChoice::TO_ELDER) {
         std::cout << "Input out of range." << std::endl;
      }
   }
   translateTo = (UserChoice)input;
   return;
}

void Translator::translate() {
   return;
}

std::string Translator::toEnglish() {
   return "";
}

std::string Translator::toElder() {
   return "";
}

int main() {
   Translator tran;
   tran.getInput();
   tran.translate();
   return 0;
}
