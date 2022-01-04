//
// Created by Bartosz Fiejdasz on 30/11/2021.
//

#include "iostream"

#include <string>
#include "fstream"
using namespace std;



int main()
{
  string line;
  string AAAAA = ",";
  char pom2 = AAAAA[0];

  ifstream linie(R"(C:\Users\Bartek\CLionProjects\JiPP2\lab10\zad4\linie.txt)");
  ofstream tramwaje(R"(C:\Users\Bartek\CLionProjects\JiPP2\lab10\zad4\tramwaje.txt)");
  ofstream autobusy(R"(C:\Users\Bartek\CLionProjects\JiPP2\lab10\zad4\autobusy.txt)");

  while(!linie.eof()){
	getline(linie,line);
	char pom = line[2];
	if(pom == pom2)
	  tramwaje << line << endl;
	else
	  autobusy << line << endl;
	line = "";
  }
  linie.close();
  tramwaje.close();
  autobusy.close();
  return 0;
}
