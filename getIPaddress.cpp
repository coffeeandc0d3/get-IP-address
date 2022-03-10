#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string DIR="/home/justin/ip-info";

int main()
{
  ifstream shellOutput;
  shellOutput.open(DIR);

  if (shellOutput.is_open() == false) {cout << "Could not open file in: "
          << "''" << DIR << "''" << endl; return 1; }

  string eachLine, targetString = "";
  string targetLine = "192";   

  while (getline(shellOutput, eachLine))
  {
//        cout << "I/O: " << eachLine << "" << endl;

          int found = eachLine.find(targetLine);

      if(found != std::string::npos)
      {
         targetString = eachLine;
      }
  }

//  cout << "\nRetrieved: " << targetString << endl;

 //After finding correct single string
 string exportString = targetString;

 // Min Range
 int pos1 = targetString.find("t") + 1;

 // Max Range 
 int pos2 = targetString.find("b") - 8;

 exportString = targetString.substr(pos1,pos2);
 cout << "IP: " << exportString << endl;

 return 0;
}
