/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on January 10, 2019, 10:54 PM
 * Purpose:  Get the retroactive pay, annual salary, and the new montly salary
 *          
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;
//Begin main function

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//constant declaration

//variables declartion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary, retro, annual, month;
    //Initialize or input i.e. set variable values
    cout << "Input previous annual salary.\n";
    cin >> salary;
    
    //Map inputs -> outputs
    retro=0.076*salary/2;
    annual=0.076*salary+salary;
    month=annual/12;
    //Display the outputs
cout << setprecision(2)<< fixed;
cout << "Retroactive pay" << setw(7)<< "= $" <<setw(7) << retro << endl;
cout << "New annual salary" << setw(5) <<"= $" <<setw(7) <<annual << endl;
cout << "New monthly salary" <<setw(4) << "= $" <<setw(7) <<month;
    //Exit stage right or left!
    return 0;
}