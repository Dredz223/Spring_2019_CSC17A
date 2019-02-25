/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 23, 2019 7:45PM
 * Purpose:  Celsius Temperature Table
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
float celsius(float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Showpoint
    cout<<fixed<<showpoint<<setprecision(1)<<endl;
    
    //Declare Variables
    float cel;  //Celsius
    
    //Map/Process Inputs to Outputs
    cout<<"The Celsius temperature is: "<<endl;
    cout<<"Fahrenheit          Celsius"<<endl;
    cout<<"---------------------------"<<endl;
    
    for(int i=0.0; i<=20.0;i++){
        cel = celsius(i);
        cout<<i<<"                   "<<cel<<endl;
    }
    //Exit program!
    return 0;
}
float celsius(float f){
    float cel;
    cel = (9.0/5.0) * (f - 32.0);
    return cel;
}
