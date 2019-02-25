/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 22, 2019 9:51PM
 * Purpose:  Population
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
    int    starnum;      //Starting number of organisms
    float    avginpo;      //Average population increase, in percentage
    int         days;           //Number of days they will multiply 
    bool valid=false;   //USed for validating user input
    float    percent;      //Percentage conversion
    int       result;
    //Ask user input
    //Validation, start, average increase, days
    do{
        cout<<"What is the starting number of organisms? (No less than 2)"<<endl;
        cin>>starnum;
        if(starnum>=2){
            valid=true;
        }
        else{
            cout<<"Invalid input!! Please try again!"<<endl;
        }
    }while(!valid);
    valid=false;
    
    do{
        cout<<"What is the average daily population increase of the organisms? (as a percentage)"<<endl;
        cin>>avginpo;
        if(avginpo>=0){
            percent = (avginpo/100.0);
            valid=true;
        }
        else{
            cout<<"Invalid input!! Please try again!"<<endl;
        }
    }while(!valid);
    valid=false;
    
    do{
        cout<<"What is the number of days they will multiply? (No less than 1)"<<endl;
        cin>>days;
        if(days>=1){
            valid=true;
        }
        else{
            cout<<"Invalid input!! Please try again!"<<endl;
        }
    }while(!valid);
    valid=false;
    
    cout<<endl;
    cout<<"Day              Population"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Day 0            "<<starnum<<endl;
    
    //Display size of population and days
    for(int i=1; i<=days;i++){
        starnum += starnum * percent; 
        cout<<"Day "<<i<<"            "<<starnum<<endl;
    }
    
    //Map/Process Inputs to Outputs
    
    //Exit program!
    return 0;
}