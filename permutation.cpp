
//Name: Deven Greenlee 
//modified: 6/25/2022
//Purpose: displays all permutations for a given string 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userString;
    int placeNum=0;
    string pArray[5000];
    cout << "enter a string: ";
    cin >> userString;
    

    for(int i = 0; i < userString.length(); i++)
    {
        string tempString = userString;
        if(0!= i)
        {
            tempString[0] = tempString[i];
            tempString[i] = userString[0];

        }

        for(int a  = 1; a <userString.length(); a++)
        {
            char ss = tempString[1];
            tempString[1] = tempString[a];
            tempString[a] = ss;
            cout<<tempString + "\n";
            pArray[placeNum] = tempString;
            placeNum++;
        }
    }
    
    for(int c = 0; c < sizeof(pArray);c++)
    {
        for(int d = 0; d < sizeof(pArray);d++)
        {
            if(c != d && pArray[c] == pArray[d])
            {
                pArray[d] = "";
                
            }
        }

    }
}
