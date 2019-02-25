/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 24, 2019 6:23PM
 * Purpose:  Binary String Search
 *         
 */

//System Libraries
#include <string.h>
#include <iostream> //I/O Library -> cout,endl
#include <string>   //String Library
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
const int SIZE=20;

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int binSrch(char *[], int, string);     //Binary Search
void sort(char *[], int);               //Sort array

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    char *names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                             "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                             "Talor, Terri", "Johnson, Jill", "Allison, Jeff",
                             "Looney, Joe", "Wolfe, Bill", "James, Jean", 
                             "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                             "Javens,Renee", "Harrison, Rose", "Setzer, Cathy",
                             "Pike, Gordon", "Holland, Beth"};
    
    string search;
    int result;
    
    //Search for name
    cout<<"Enter the name you wish to search for: "<<endl;
    getline(cin, search);
    
    //Sort array
    sort(names, SIZE);
    
    for(int i=0;i<SIZE;i++){
        cout<<names[i]<<endl;
    }
    
    //Search for the name
    result = binSrch(names, SIZE, search);
    
    //If binarySearch returned -1, the name was not found

    if (result == -1){
        cout << "That name does not exist in the array."<<endl;
    }
    else{
        cout << "Name " << search << " was found in element "
                << result << " of the array."<<endl;
    }
    
    
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
void sort(char *na[], int SI){
    char *temp;
    for(int i=0;i<SI;i++){
        for(int j=0;j<SI;j++){
            if(strcmp(na[i],na[i+1])>0){
                temp = na[i];
                na[i] = na[i+1];
                na[i+1] = temp;
            }
        }
    }
}
int binSrch(char *na[], int SI, string val){
    int first = 0,
        last = SI - 1,
        middle,
        pos = -1;
    bool found = false;
    
    while(!found && first <= last){
        middle = (first + last) / 2;
        if(na[middle] == val){
            found = true;
            pos = middle;
        }
        else if (na[middle] > val){
            last = middle - 1;
        }
        else{
            first = middle +1;
        }
    }
    return pos;
}
