/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 22, 2019 4:09PM
 * Purpose:  Days in a Month
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
    bool valid=false;   //Boolean used for value checking the user input
    int mon;            //Months 1-12
    unsigned int year;  //Years
    int days;           //Number of days, max 31, min 28
    //Ask user for the month
    do{
        cout<<"Enter a month (1-12): "<<endl;
        cin>>mon;
        if(mon>=1 && mon <=12){
            valid = true;
        }
        else
            cout<<"Invalid Input! Please try again."<<endl;
    }while(!valid); 
    
    //Ask user for the year
    cout<<"Enter a year: "<<endl;
    cin>>year;
    
    //Calculations
    switch(mon){
        case 1:
            days = 31;
            cout<<days<<" days."<<endl;
            break;
        case 2:
            if(year%100 == 0){
                if(year%400 == 0){
                    cout<<"Leap Year."<<endl;
                    days = 29;
                    cout<<days<<" days."<<endl;
                }
                else{
                    cout<<"Not leap year."<<endl;
                    days = 28;
                    cout<<days<<" days."<<endl;
                }
            }
            else{
                if(year%4 == 0){
                    cout<<"Leap Year."<<endl;
                    days = 29;
                    cout<<days<<" days."<<endl;
                }
                else{
                    cout<<"Not a leap year."<<endl;
                    days = 28;
                    cout<<days<<" days."<<endl;
                }
            }
            break;
        case 3:
            days = 31;
            cout<<days<<" days."<<endl;
            break;
        case 4: 
            days = 30;
            cout<<days<<" days."<<endl;
            break;
        case 5:
            days = 31;
            cout<<days<<" days."<<endl;
            break;
        case 6:
            days = 30;
            cout<<days<<" days."<<endl;
            break;
        case 7:
            days = 31;
            cout<<days<<" days."<<endl;
            break;
        case 8: 
            days = 31;
            cout<<days<<" days."<<endl;
            break;
        case 9:
            days = 30;
            cout<<days<<" days."<<endl;
            break;
        case 10:
            days = 31;
            cout<<days<<" days."<<endl;
            break;
        case 11:
            days = 30;
            cout<<days<<" days."<<endl;
            break;
        case 12:
            days = 31;
            cout<<days<<" days."<<endl;
            break;
    }
    //Map/Process Inputs to Outputs
    
    //Exit program!
    return 0;
}