/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on February 3, 2019
 * Purpose: Executioner Project 1 Version 3 
 */
//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Show menu and loop
    do{
        //Display menu
        cout<<endl<<endl<<"Type 0 to Exit"<<endl;
        cout<<"Executioner Time!! Are you ready to save yourself?!"<<endl;
        cout<<"Type 1 for Question 1!"<<endl;
        cout<<"Type 2 for Question 2!"<<endl;
        cout<<"Type 3 for Question 3!"<<endl;
        cout<<"Type 4 for Question 4!"<<endl;
        cout<<"Type 5 for Question 5!"<<endl<<endl;
        
        //Input choice
        cin>>choice;
        //Place solutions to problems in switch statements
        switch(choice){
            case '1':{    
                //Declare all Variables Here
                int chance = 0 ; //Amount of tries taken
                char letter;     //Letter input
                int lives = 6;   //Amount of lives
                char num1 = '_', num2 = '_', num3 = '_', num4 = '_', num5 = '_';
                char nu1 = 'J', nu2 = 'A', nu3 = 'C', nu4 = 'O', nu5 = 'B';

                //Input data
                cout<<"Executioner Time, use all caps please!"<<endl;
                cout<<"What is my name (Jacob)?"<<endl;
                do{

                    cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<endl;
                    cout<<" _______  "<<endl;
                    cout<<" |     |  "<<endl;
                    cout<<" |     O  "<<endl;
                    cout<<" |    /|/ "<<endl;
                    cout<<" |     |  "<<endl;
                    cout<<" |    / / "<<endl;
                    cout<<"_|_       "<<endl;
                    cout<<"YOU HAVE "<<lives<<" CHANCES LEFT"<<endl;

                    cin>>letter;
                    cout<<endl;
                    cout<<endl;

                    //Process/Calculations Here
                    if (letter=='J'){ 
                        num1 = nu1;
                        cout<<"I guess you are winning, keep it up!"<<endl;
                    }

                    if (letter=='A'){ 
                        num2 = nu2;
                        cout<<"I guess you are winning, keep it up!"<<endl;
                    }

                    if (letter=='C'){ 
                        num3 = nu3;
                        cout<<"I guess you are winning, keep it up!"<<endl;
                    }

                    if (letter=='O'){ 
                        num4 = nu4;
                        cout<<"I guess you are winning, keep it up!"<<endl;
                    }

                    if (letter=='B'){ 
                        num5 = nu5;
                        cout<<"I guess you are winning, keep it up!"<<endl;
                    }
                    if (!(letter=='J'||letter=='A'||letter=='C'||letter=='O'||letter=='B')){
                        cout<<"Come on now that ain't one of the letters"<<endl;
                        chance=0+1;
                    }
                    lives=lives-chance;
                }
                            while (lives>=1);{
                        cout<<"You got executed! The word was "<<nu1<<nu2<<nu3<<nu4<<nu5<<", let's go back to the menu to try again"<<endl;
                        exit(0);
                        
                        default:{
                cout<<"Exit the Program"<<endl;
                exit(0);
            }
        }
        
    }while(choice>='1'&&choice<='5');
    
    //Exit
    return 0;
    }