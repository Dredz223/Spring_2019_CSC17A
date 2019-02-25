/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 24th, 2019, 10:10 AM
 * Purpose:  Math Tutor
 * 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Random and set number seed
#include <ctime>    //
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short op1,//operand 1
                   op2,//oprand 2
                   result,//op1+op2
                   stuAns;//Student Answer
    
    //Initial Variables
    op1=100+rand()%900;//3Digit number
    op2=10+rand()%990;//2 or 3 Digit number
            
    //Map/Process Inputs to Outputs
    result=op1+op2;//Result
    
    //Display the output
    cout<<setw(6)<<op1<<endl;
    cout<<" + "<<setw(3)<<op2<<endl;
    cout<<"------"<<endl;
    cout<<(result>=1000?"  ":"   ");
    cin>>stuAns;
    cout<<setw(6)<<result<<
            (result==stuAns?" Correct":" Incorrect")<<endl;
    //Exit program!
    return 0;
}