/* 
 * Author: Jacob Velasquez 
 * Date: January 8, 2018
 * Purpose: Product and Quotient of 2 numbers
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    int x, y, product, quotient, total;
    //Input or initialize values Here
    cout<< "Input 2 integer numbers.\n";
    cin>> x; 
    cin>> y;
    //Process/Calculations Here
    product=y*x;
    quotient=y/x;
    //Output Located Here
    cout<<endl;
   
    cout<<"The product of " << x << "*" << y << " = " << product ;
    
    cout<<endl;
    
    cout<<endl;
    
    cout<<"The quotient of " << y << "/" << x << " = " << quotient ;
    
    //Exit
    return 0;
}