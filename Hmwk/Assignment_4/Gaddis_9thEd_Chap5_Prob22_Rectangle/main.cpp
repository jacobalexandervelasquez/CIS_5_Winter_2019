/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on January 18, 2019
 * Purpose: Positive integer no greater than 15
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
    //Set the random number seed
    
    //Declare Variables
        short int num; 
           char X;
    //Initialize or input i.e. set variable values
    cin >> num >> X;
    for (int i = 1; i <= num; i++) {
        for (int i = 1; i <= num; i++)
            cout << X;
        if (i < num)
            cout << endl;
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}