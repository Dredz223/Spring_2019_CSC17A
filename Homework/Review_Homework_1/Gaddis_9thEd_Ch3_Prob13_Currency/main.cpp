/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 21, 2019 7:48PM
 * Purpose:  Currency
 *         
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>   //String Library
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float jYen;  //Japanese Yen $1 = 110.75 jYen
    float euro;  //Euro $1 = 0.88
    float doll;  //American dollar $1 = $1   
    //enter your American currency
    cout<<"Enter the currency in American Dollars. $";
    cin>>doll;
    
    //Initial Variables
    euro = doll * (0.88);
    jYen = doll * (110.75);
    //Map/Process Inputs to Outputs
    cout<<"The Japanese Yen converted is: \u00A5"<<jYen<<endl;
    cout<<"The Euro converted is: \u20AC"<<euro<<endl;
    //Exit program!
    return 0;
}
