/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on January 17, 2019, 12:46 PM
 * Purpose:  Menu Program
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <ctime>   //Time Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVYRMN=12;//Conversion 12 months in a year
const float PERCENT=100;//Conversion to percentage
const float PENNIES=100;//Conversion to pennies
const float HALFPNY=0.005F;//Half a penny
const float CNVLBGR=4.53592e2f;//Conversion from lbs to grams

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem

    //Initialize or input i.e. set variable values
    cout<<"Menu Program"<<endl;
    cout<<"Type 1 for Gaddis 9thEd Chap4_Prob8 SortNames"<<endl;
    cout<<"Type 2 for Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
    cout<<"Type 3 for Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
    cout<<"Type 4 for Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
    cout<<"Type 5 for Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
    cout<<"Type 6 for Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
    cout<<"Type 8 for Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
    
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        case '1':{    //Declare Variables
    
    string name1, name2, name3;
    
    //Initialize or input i.e. set variable values
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> name1;
    cin >> name2;
    cin >> name3;
    
    if (name1 < name2 && name1 < name3)    
    
        cout<<name1<<endl;
         else if (name2<name1 && name2<name3)
        cout<< name2<< endl;
         else if (name3<name1 && name3<name2)
        cout<<name3<<endl;
        
    if (name1>name2 && name1<name3)    
        cout<<name1<<endl;
         else if (name1>name3 && name1<name2)
     cout<<name1<<endl;
         else if (name2>name3 && name2<name1)
        cout<<name2<<endl; 
         else if (name2>name1 && name2<name3)
        cout<<name2<<endl;
         else if (name3>name1 && name3<name2)
     cout<<name3<<endl;
         else if (name3>name2 && name3<name1)
     cout<<name3<<endl;
     
    if (name1>name3 && name1>name2)    
        cout<<name1;
         else if (name2>name3 && name2>name1)
        cout<<name2;
         else if (name3>name2 && name3 > name1)
        cout << name3;
    //Map inputs -> outputs
    //Display the outputs
    //Exit stage right or left!

                    break;
               }
        case '2':{
                    //Declare Variables
                    float monPymt,//Monthly Payment in $'s
                          intRate,//Interest Rate per year
                          loanAmt,//Loan amount in $'s
                          totPaid,//Total amount paid in $'s
                          intPaid;//Interest paid
                    int   nMnths;//Number of months

                    //Initialize or input i.e. set variable values
                    cout<<"Loan calculator program"<<endl;
                    cout<<"Input Loan Amount in $'s,"<<endl<<
                          "Interest Rate in %/yr, "<<endl<<
                          "and the number of Months to pay"<<endl;
                    cin>>loanAmt>>intRate>>nMnths;

                    //Map inputs -> outputs
                    intRate/=CNVYRMN;//Convert to %/month
                    intRate/=PERCENT;//Convert to decimal value per month
                    float temp=pow(1+intRate,nMnths);//Utility Variable
                    monPymt=intRate*temp*loanAmt/(temp-1);//Monthly payment
                    int iPymt=(monPymt+HALFPNY)*PENNIES;//Convert Payment to Pennies
                    monPymt=iPymt/PENNIES;//Converting back to Dollars
                    totPaid=monPymt*nMnths;//Total amount paid back
                    intPaid=totPaid-loanAmt;//Interest paid

                    //Display the outputs
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Loan Amount      = $"<<setw(10)<<loanAmt<<endl;
                    cout<<"Interest Rate    =  "<<setw(10)<<intRate*PERCENT<<"%/month"<<endl;
                    cout<<"Number of months =  "<<setw(7)<<nMnths<<endl;
                    cout<<"Monthly Payment  = $"<<setw(10)<<monPymt<<endl;
                    cout<<"Total Payment    = $"<<setw(10)<<totPaid<<endl;
                    cout<<"Interest Paid    = $"<<setw(10)<<intPaid<<endl;

                    break;
               }
        case '3':{
    //Declare Variables
    float balance, checks, fee, charge, newb;
    //Initialize or input i.e. set variable values
    cout << "Monthly Bank Fees\n"
    << "Input Current Bank Balance and Number of Checks\n";
    cin >> balance >> checks;
    //Map inputs -> outputs
    if (checks<20)
    fee=.10*checks;
    else if (checks>=20 && checks<=39)
    fee=.08*checks;
    else if (checks>=40 && checks<=59)
    fee=.06*checks;
    else if (checks>=60)
    fee=0.04*checks;
    if (balance>0 && balance<400)
    charge=15;
    else if (balance>=400)
    charge=0;
    else if (balance<0)
    cout<<"The account is overdrawn\n";
    newb=balance-(10+fee+charge);
    //Display the outputs
cout<<setprecision(2)<<fixed;
cout<<"Balance"<< setw(6) << "$"<<setw(9)<<balance<<endl;
cout<<"Check Fee"<<setw(4)<< "$"<<setw(9)<<fee<< endl;
cout<<"Monthly Fee $"<<setw(10)<<"10.00\n";
cout<<"Low Balance $"<<setw(9)<<charge<<endl;
cout<<"New Balance $"<<setw(9)<<newb;
    //Exit stage right or left!
                    break;
               }
        case '4':{
                int time1, time2, time3;
    string name1, name2, name3;
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
   cin>>name1>>time1>>name2>>time2>>name3>>time3;

    if (time1<time2 && time1<time3 && time2<time3){
        cout<<name1<<"\t"<<setw(8)<<time1<<endl;
        cout<<"\t"<<name2<<setw(8)<<time2<<endl;
        cout<<name3<<"\t"<<setw(8)<<time3;
    }else{}
     if (time1<time2 && time1<time3 && time3<time2){
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2;
    }
    else{}
    if (time2<time3 && time2<time1 && time3<time1){
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1;
    }
    else{}
     if (time2<time3 && time2<time1 && time1<time3){
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3;
    }
    else{}
    if (time3<time1 && time3<time2 && time2<time1){
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1;
    }
    else{}
    if (time3<time1 && time3<time2 && time1<time2){
        cout<<name3<<"\t"<<setw(3)<<time3<<endl;  
        cout<<name1<<"\t"<<setw(3)<<time1<<endl;   
        cout<<name2<<"\t"<<setw(3)<<time2;
    }
    else{}
    
                    break;
               }
        case '5':{
             string package;
 float time;
 float price;
 cout << "ISP Bill\n";
 cin >> package;
 // Package validation
 if ((package == "A") || (package == "B") || (package == "C")) {
 cout << "Input Package and Hours\n";
 cin >> time;
 // Time validation
 if (time <= 744) {
// Package A
if (package == "A") {
if (time > 10) {
price = 9.95 + (time - 10) * 2;
} else {
price = 9.95;
}
// Package B
} else if (package == "B") {
if (time > 20) {
price = 14.95 + (time - 20) * 1;
} else {
price = 14.95;
}
// Package C
} else {
price = 19.95;
}
 } else {
cout << "Invalid number of hours!";
 }
 } else {
 cout << "Invalid package!";
}
cout << "Bill = $ " << price;
    
                    break;
               }
        case '6':{
               //Variable declaration
   char Player1, Player2, ans,x;

   //Stage to be set for game
   cout<<"Rock Paper Scissors Game"
   <<endl; 
   cout<<"Input Player 1 and Player 2 Choices"
   <<endl; 
       cin>>Player1;
       cin>>Player2;
       
       //Player1 wins the game computation // Checking
       if ((Player1=='R'||Player1=='r') && (Player2=='S'||Player2=='s'))
       {
           cout<<"Rock breaks scissors.";
       }
       //Player2 wins the game computation // Checking
       else if((Player1 =='S'||Player1=='s') && (Player2=='R'||Player2=='r'))
       {
           cout<<"Rock breaks scissors";
       }
       //Player1 wins the game computation // Checking
       else if((Player1=='P'||Player1=='p') && (Player2=='R'||Player2=='r'))
       {
           cout<<"Paper covers rock.";
       }
       //Player2 wins the game computation // Checking
       else if((Player1=='R'||Player1=='r') && (Player2=='P'||Player2=='p'))
       {
           cout<<"Paper covers rock.";
       }
       //Player1 wins the game computation // Checking
       else if((Player1=='S'||Player1=='s') && (Player2=='P'||Player2=='p'))
       {
           cout<<"Scissors cuts paper.";
       }
       //Player2 wins the game computation // Checking
       else if((Player1=='P'||Player1=='p') && (Player2=='S'||Player2=='s'))
       {
           cout<<"Scissors cuts paper.";
       }
       //Game is draw computation // Checking
       else if((Player1=='R'||Player2=='r') ||
           (Player1=='S'||Player2=='s')||
           (Player1=='S'||Player2=='s')
           )
       {
           //Draw conclusion
           cout<<"Nobody wins.\n";
           //YAY!
       }
    
                    break;
               }
        case '7':{
                //Declaring variables
    string sign1, sign2;
 
    cout<<"Horoscope Program which examines compatible signs." << endl; 
    cout<<"Input 2 signs." << endl;
    cin>>sign1>>sign2; 
    //Generating the signs and thier corresponding pair
    if(sign1=="Aries"||sign1=="Leo"||sign1=="Sagittarius"){
        
        if (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius"){
            
            cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
            
        } else {
            
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    } 
    else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn"){
        
        if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn"){
            
            cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
            
        } else {
            
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    } 
    else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius"){
        
        if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius"){
            
            cout << sign1 << " and " << sign2 << " are compatible Air signs.";
            
        } else {
            
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    } 
    else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces"){
        
        if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces"){
            
            cout << sign1 << " and " << sign2 << " are compatible Water signs.";
            
        } else {
            
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
   //Conclusion includes astrology is a pseudoscience
    
                    break;
               }
        case '8':{
                int acyr, n1, n10, n100, n1000;
    string rmYear, rmN, rmN10, rmN100, rmN1000;
    
    cout<<"Arabic to Roman numeral conversion."
    <<endl;
    cout<<"Input the integer to convert."
    <<endl;
    cin>>acyr;

    if(acyr >= 1000 && acyr <= 3000){
        
        n1 = acyr % 10;
        n10 = (acyr/10) % 10;
        n100 = (acyr/100) % 10;
        n1000 = (acyr/1000) % 10;
        
        switch(n1){
            case 0:
                rmN = "";
                break;
            case 1:
                rmN = "I";
                break;
            case 2:
                rmN = "II";
                break;
            case 3:
                rmN = "III";
                break;
            case 4:
                rmN = "IV";
                break;
            case 5:
                rmN = 'V';
                break;
            case 6:
                rmN = "VI";
                break;
            case 7:
                rmN = "VII";
                break;
            case 8:
                rmN = "VIII";
                break;
            case 9:
                rmN = "IX";
                break;
            default:
                rmN = "";
        }
        
        switch(n10){
            case 0:
                rmN10 = "";
                break;
            case 1:
                rmN10 = "X";
                break;
            case 2:
                rmN10 = "XX";
                break;
            case 3:
                rmN10 = "XXX";
                break;
            case 4:
                rmN10 = "XL";
                break;
            case 5:
                rmN10 = 'L';
                break;
            case 6:
                rmN10 = "LX";
                break;
            case 7:
                rmN10 = "LXX";
                break;
            case 8:
                rmN10 = "LXXX";
                break;
            case 9:
                rmN10 = "XC";
                break;
        }
        
        switch(n100){
            case 0:
                rmN100 = "";
                break;
            case 1:
                rmN100 = 'C';
                break;
            case 2:
                rmN100 = "CC";
                break;
            case 3:
                rmN100 = "CCC";
                break;
            case 4:
                rmN100 = "CD";
                break;
            case 5:
                rmN100 = 'D';
                break;
            case 6:
                rmN100 = "DC";
                break;
            case 7:
                rmN100 = "DCC";
                break;
            case 8:
                rmN100 = "DCCC";
                break;
            case 9:
                rmN100 = "CM";
                break;
        }
        
        switch(n1000){
            case 0:
                rmN1000 = "";
                break;
            case 1:
                rmN1000 = "M";
                break;
            case 2:
                rmN1000 = "MM";
                break;
            case 3:
                rmN1000 = "MMM";
                break;
        }
        cout << acyr << " is equal to " << rmN1000 + rmN100 + rmN10 + rmN;
        
    } else {
        cout << acyr << " is Out of Range!";
    }
    
               }        
        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }

    //Exit stage right or left!
    return 0;
}