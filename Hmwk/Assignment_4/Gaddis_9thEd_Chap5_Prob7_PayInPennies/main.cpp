/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on January 18, 2019
 * Purpose:  Calculates how much a person would earn over a period of time
if his or her salary is one penny the first day and two pennies the second day, and continues
to double each day
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
   int days;
   double sum = .01,
          pay = .01;
    //Initialize or input i.e. set variable values
    cin >> days; // have user input days they worked
    
 
    
    if (days == 0)
    cout << "0 Days are not allowed.";
    else if (0 > days)
    cout << "Negative days are not allowed.";
    else {}
    
    if (days >= 1) {
        for (int i = 0; i< days - 1; i++){
            pay *= 2;
            sum += pay;
        }
    }
    
    
    cout << "Pay = $"  << setprecision(2) << fixed << sum;
    return 0;
}