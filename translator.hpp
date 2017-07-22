#pragma once

#include <string>
#include <map>

class Translator {
private:
	string original;
	string translated;
	string mapFileName;
	map<string, string> map;

	void readMap(string filename);

public:
	Translator();

	void getInput()
	string toEnglish();
	string toElder();
};
