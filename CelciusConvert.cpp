/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Name: Deven Greenlee 
//modified: 6/27/2022
//Purpose: Displays conversion of celsius temps to farrenheight based on range and step

#include <iostream>

using namespace std;

int main()
{
    bool correctInput = false;
    double lowerLimit;
    double highLimit;
    int step;
    cout<<"please enter a lower limit temp in C: ";
    cin>> lowerLimit;
    
    
    while(correctInput == false)
    {
        cout<<"please enter higher limit temp in C: ";
        cin>> highLimit ;
        
        if(highLimit > lowerLimit)
        {
            correctInput = true;
        }
        else
        {
            cout << "invalid entry: please enter number larger than lower limit \n";
        }
    }
    
    cout << "please enter step: ";
    cin >> step;
    
    cout<<"Celcius          farrenheight \n--------        -------------- \n";
    for(double i = lowerLimit; i < highLimit;i += step)
    {
        double convertnum = (i * 1.8) + 32;
        cout<< i;
        cout<< "                 ";
        cout << convertnum;
        cout << "\n";
        
        
    }
    
    
}

//we need to get the 2 temperatures and the skip 
// go through each step past the lower and convert to farrenheight 
//save those conversions 
//print them in a chart format 