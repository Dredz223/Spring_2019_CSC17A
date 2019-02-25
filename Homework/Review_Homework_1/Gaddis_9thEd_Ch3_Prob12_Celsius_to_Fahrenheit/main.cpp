/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 21, 2019 6:58PM
 * Purpose:  Celsius to Fahrenheit
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
    int far;  //Fahrenheit
    int cel;  //Celsius
    
    //enter the celsius 
    cout<<"Enter the Celsius."<<endl;
    cin>>cel;
    
    //Initial Variables
    far = (9/5) * cel + 32;
    //Map/Process Inputs to Outputs
    cout<<"The Fahrenheit temperature is: "<<far<<endl;
    //Exit program!
    return 0;
}
