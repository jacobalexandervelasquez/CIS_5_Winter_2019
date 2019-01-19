/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on January 18, 2019
 * Purpose: Series of integers
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
   int n;
   int lrgst, // largest number
      smllst, // smallest number
       count = 0; // count
   bool repeat = true; // true of false statement
   //prompt the user to enter a series of numbers
  
   do
    //Declare Variables
    
    //Initialize or input i.e. set variable values
       {
       //read the number
       cin >> n;
       
       //if -99 is enteres exit the loop
       if (n == -99)
           repeat = false;
       else
       {
           //if the count is 0 (which means this is the first number) set largest and smallest as n
           if (count == 0)
           {
               lrgst = n;
               smllst = n;
               count++; //increment count
           }
           //else check the largest and smallest numbers
           else
           {
               //if n is less than smallest
               if (n < smllst)
                   smllst = n;   //set n as smallest
               //if n is greater than largest
               if (n > lrgst)  
                   lrgst = n;   //set n as largest
           }
       }

   }while (repeat);
  
    //Map inputs -> outputs
    
    //Display the outputs
   cout << "Smallest number in the series is "<< smllst << endl;
   cout << "Largest  number in the series is "<< lrgst ;
    //Exit stage right or left!
    return 0;
}