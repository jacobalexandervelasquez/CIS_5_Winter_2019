/* 
 * Author: 
 * Date:
 * Purpose:
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
    char C;
    //Input or initialize values Here
    cout<<"Input the character to make the Big C!";
    //Process/Calculations Here
    cin>> C;
    //Output Located Here
    cout<<"\n\n";
    cout<<"    "<<C<<" "<<C<<" "<<C<<"\n";
    cout<<"   "<<C<<"     "<<C<<"\n  ";
    cout<<C<<"\n  ";
    cout<<C<<"\n  ";
    cout<<C<<"\n  ";
    cout<<C<<"\n  ";
    cout<<C<<"\n";
    cout<<"   "<<C<<"     "<<C<<"\n";
    cout<<"    "<<  C<<" "<<C<<" "<<C<<"\n";
    //Exit
    return 0;
}