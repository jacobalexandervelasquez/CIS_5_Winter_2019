/* 
 * File:   main.cpp
 * Author: Jacob Velasquez
 * Created on Jan 17, 2019
 * Purpose:  To tell the Truth
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //Display the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y "<<
          " !(X||Y) !X&&!Y"<<endl;
    
    //First Row (X)
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;
    
    //Second Row (Y)
    x=true;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    
    //Third Row (!X)
    x=0;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    //Fourth Row (!Y)
    x=false;
    y=0;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    //Fifth Row (X&&Y)
    x= (not 0);
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    
    //Sixth Row (X||Y)
    x=(not 0);
    y=(not 0);
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    //Seventh Row (X^Y)
    x=false;
    y= true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    //Eighth Row (X^Y^X)
    x=true;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    //Ninth Row (X^Y^Y)
    x=false;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    //Tenth Row (!(X&&Y))
    x=(not 0);
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;


    //Eleventh Row (!X||!Y)
    x=0;
    y=false;
        cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;


    //Twelfth Row (!(X||Y))
    x=true;
    y=0;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;


    //Thirteenth Row (!X&&!Y)
    x=false;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"   "
        <<(x||y? 'T':'F')<< "    "
        <<(x^y? 'T':'F')<< "    "
        <<(x^y^x? 'T':'F')<<"     "
        <<(x^y^y? 'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y? 'T':'F')<< "       "
        <<(!(x||y)? 'T':'F')<< "     " 
        <<(!x&&!y?'T':'F')<<" "
        <<endl;

    
    //Exit
    return 0;
}
