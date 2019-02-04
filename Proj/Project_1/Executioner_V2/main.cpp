/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on February 3, 2019
 * Purpose: Executioner Project 1 Version 2 
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
        cout<<"Executioner Time"<<endl;
        cout<<"Type 1 for Question 1!"<<endl;
       
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
                cout<<"Executioner Time"<<endl;
                cout<<"What is my name?"<<endl;
                do{
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
                        cout<<"I guess you are winning"<<endl;
                    }

                    if (letter=='A'){ 
                        num2 = nu2;
                        cout<<"I guess you are winning"<<endl;
                    }

                    if (letter=='C'){ 
                        num3 = nu3;
                        cout<<"I guess you are winning"<<endl;
                    }

                    if (letter=='O'){ 
                        num4 = nu4;
                        cout<<"I guess you are winning"<<endl;
                    }

                    if (letter=='B'){ 
                        num5 = nu5;
                        cout<<"I guess you are winning"<<endl;
                    }
                    if (!(letter=='J'||letter=='A'||letter=='C'||letter=='O'||letter=='B')){
                        cout<<"Not good"<<endl;
                        chance=0+1;
                    }
                    lives=lives-chance;
                }
                            while (lives>=1);{
                        cout<<"Fail"<<nu1<<nu2<<nu3<<nu4<<nu5<<", Go back"<<endl;
                        exit(0);
                    }
                           default:{
                cout<<"Exit the Program"<<endl;
                exit(0);
            }
        }
        
    }while(choice>='1'&&choice<='5');
    
    //Exit
    return 0;
    }