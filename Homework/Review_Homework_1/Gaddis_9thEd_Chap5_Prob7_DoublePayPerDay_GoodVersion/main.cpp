/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 24, 2019, 8:00 PM
 * Purpose:  DoublePayPerDay_GOODVERSION
 */

//System Libraries Here
#include <iostream> //I/o Library
#include <iomanip>  //Format
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned char CNVPDOL=100;//Number of pennies in a dollar
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned int totPay; //Total Pay
    unsigned char nDays; //Number of Days
    
    //Input or initialize values Here
    nDays=30; //30 Days in this month
    totPay=0; //Initialize total pay to a dollar
    cout<<"This is a Pay Day problem"<<endl;
    cout<<"Your pay is doubled each day"<<endl;
    cout<<"starting with a penny."<<endl;
    
    //Process/Calculations Here
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int day=1,pennies=1;day<=nDays;day++,pennies*=2){
        totPay+=pennies;
        cout<<"Day "<<setw(2)<<day<<" Pay = $"
                <<setw(8)<<pennies/CNVPDOL<<".";
        if(pennies%CNVPDOL<10) 
              cout<<"0"<<pennies%CNVPDOL<<endl;
        else  cout<<pennies%CNVPDOL<<endl;
        
    }
    
    //The Number randomly set
    cout<<"Total Pay  = $"<<totPay/CNVPDOL<<".";
    if(totPay%CNVPDOL<10) 
              cout<<"0"<<totPay%CNVPDOL<<endl;
    else cout<<totPay%CNVPDOL<<endl;
    
    //Output Located Here
    
    //Exit
    return 0;
}

