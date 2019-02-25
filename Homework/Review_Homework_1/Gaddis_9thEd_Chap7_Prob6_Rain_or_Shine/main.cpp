/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 23, 2019 8:53PM
 * Purpose:  Rain or Shine
 *         
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>   //String Library
#include <iomanip>  //Format Library
#include <fstream>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
const int MONTHS=3;     //Number of months
const int DAYS= 30;     //Number of days
const int SIZE= 90;     //Total number of days

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void read(char[],string[][DAYS]);   //Reading the function
void report(string[][DAYS]);        //Reporting the results

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char weather[SIZE];             //Array for the weather file
    string summer[MONTHS][DAYS];    //2D array for the 3 rows and 30 columns
    
    read(weather, summer);
    report(summer);
    
    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
void read(char w[],string s[][DAYS]){
    ifstream weather("RainOrShine.dat"); //Weather file
    
    for(int row=0;row<MONTHS;row++){
        for(int col=0;col<DAYS;col++){
            weather>>s[row][col];
        }
    }
    weather.close();
}
void report(string sum[][DAYS]){
    int rCount = 0, //rainy days count
        cCount = 0, //Cloudy days count
        sCount = 0; //Sunny days count
    
    for(int row=0;row<MONTHS;row++){
        for(int col=0;col<DAYS;col++){
            if (sum[row][col]=="R"){
                rCount++;
            }
            else if (sum[row][col]=="C"){
                cCount++;
            }    
            else{
                sCount++;
            }
        }
    }
    cout<<"There were "<<rCount<<" rainy days"<<endl;
    cout<<"There were "<<cCount<<" cloudy days"<<endl;
    cout<<"There were "<<sCount<<" sunny days"<<endl;
}