/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on January 18, 2019
 * Purpose: Positive Integer Value Loop
 *
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
    //Declare Variables
    //Initialize or input i.e. set variable values
    int num, sum=0;
    cin>>num;
    //Solve Problems
    for (int i = 1; i <= num; i++)
    {
        sum+=i;
    }
    
    cout<< "Sum = "<< sum;
    //Exit stage right or left!
    return 0;
}
