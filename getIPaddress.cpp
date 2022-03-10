#include <iostream>
#include <fstream>
#include <string>
using namespace std;

static string DIR="";
const string IP = "192";   

// Pass in retreived value for echo /home/$USER into here for DIR to be right
int main(int argc, char *argv[])
{
  if (argc != 2) {cout << "Couldn't determine $USER pathname."; return 1;}
  
  DIR = argv[1];
  DIR.append("/ip-info");
    
  ifstream shellOutput;
  shellOutput.open(DIR);

  if (shellOutput.is_open() == false) {cout << "Could not open file in: "
          << "''" << DIR << "''" << endl; return 1; }

  string returnedLine, targetString = "";
  
  while (getline(shellOutput, returnedLine))
  {
//    cout << "I/O: " << returnedLine << "" << endl;

      int found = returnedLine.find(IP);

//    If it's found
      if(found != std::string::npos)
      {
         targetString = returnedLine;
      }    
  }

// cout << "\nRetrieved: " << targetString << endl;

// Min Range
 int pos1 = targetString.find("t") + 1;

// Max Range 
 int pos2 = targetString.find("b") - 8;

//Store ip address as substring 
 string IP_ADDR = targetString.substr(pos1,pos2);
 cout << "IP: " << IP_ADDR << endl;

 return 0;
}
