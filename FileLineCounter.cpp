//Name: Deven Greenlee 
//modified: 6/28/2022
//Purpose: counts the number of lines in a given file 


#include <iostream>
#include <fstream>

using namespace std;

int
main ()
{
  string saveText;
  string userFile;
  int count = 0;
  cout << "please enter filename to count: ";
  cin >> userFile;

  ifstream myFile (userFile);

  while (getline (myFile, saveText))
    {
      count++;
    }

  cout << "number of line in file: ";
  cout << count;



}
