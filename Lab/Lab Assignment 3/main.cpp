 /*
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on January 15, 2019, 9:34 PM
 * Purpose: Percentage Gas Tax on a gallon & Profit made from gallon 
 */

//System Libraries
#include <iostream>  
#include <iomanip>   
using namespace std;
const int   PERCENT=100;
int main(int argc, char** argv){
    //Declare Variables
    float oilPrft,  //Oil Company Profit
          fedTax,   //Federal excise Tax
          stateTx,  //State excise Tax
          salesTx,  //California State Sales Tax on fuel
          pPrice,   //Price at the pump to consumer
          sPrice;   //Price to the gas station
    //Initialize or input i.e. set variable values
    oilPrft=0.065f; //6.5 percent profit
    fedTax =0.184;  //18.4 cents per gallon or $0.184
    stateTx=0.390;  //39.0 cents per gallon or $0.390 
    salesTx=0.0425; //California sales tax on gas.
    //Map inputs -> outputs
    sPrice=(pPrice-fedTax-stateTx)/(1+salesTx); 
    //Display the outputs
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Fed   Ex Tax    = $"<<fedTax<<"/gallon"<<endl;
    cout<<"State Ex Tax    = $"<<stateTx<<"/gallon"<<endl;
    cout<<"State Sales Tax = $"<<sPrice*salesTx<<"/gallon"<<endl;
    cout<<"Oil Company Profit   = "<<oilPrft*PERCENT<<"%/gallon"<<endl;
    cout<<"Total Percentage Tax = "
            <<((pPrice-sPrice)/sPrice)*PERCENT<<"%/gallon"<<endl;
    //Exit stage right or left!
    return 0;
}
