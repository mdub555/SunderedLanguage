#pragma once

#include <string>
#include <map>
#include "UserChoice.hpp"

class Translator {
private:
   std::string original;
   std::string translated;
   UserChoice translateTo;
   std::string mapFileName;
   std::map<std::string, std::string> map;

   void readMap(std::string filename);

public:
   Translator();
   Translator(std::string mapFileName);

   void getInput();
   void translate();
   std::string toEnglish();
   std::string toElder();
};
