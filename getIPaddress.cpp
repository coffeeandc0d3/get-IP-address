#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string DIR="/home/pi/ip-info";

int main()
{
  ifstream shellOutput;
  shellOutput.open(DIR);

  if (shellOutput.is_open() == false) {cout << "Could not open file in: "
          << "''" << DIR << "''" << endl; return 1; }

  string returnedLine, targetString = "";
  string IP = "192";   

  while (getline(shellOutput, returnedLine))
  {
//    out << "I/O: " << returnedLine << "" << endl;
      int found = returnedLine.find(IP);

//    If it's found
      if(found != std::string::npos)
      {
         targetString = returnedLine;
         break;
      }    
  }

// cout << "\nRetrieved: " << targetString << endl;

 if(targetString == "") {cout << "Couldn't find IP. Are you online?"; return 1; }

 // Min Range
 int pos1 = targetString.find("t") + 1;

 // Max Range 
 int pos2 = targetString.find("b") - 8;

 string IP_ADDR = targetString.substr(pos1,pos2);
 cout << "IP: " << IP_ADDR << endl;

 return 0;
}
