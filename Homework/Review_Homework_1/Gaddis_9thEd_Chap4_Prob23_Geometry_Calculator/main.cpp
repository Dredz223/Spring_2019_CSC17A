/* 
 * File:   main.cpp
 * Author: Andres Guerrero Maldonado
 * Created on February 24, 2019, 9:01 PM
 * Purpose:  Geometry Calculator
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float PI = 3.14159;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Display Menus
    int Choice;
    cout << "Geometry Calculator\n"
         << " 1. Calculate the Area of a Circle\n"
            << " 2. Calculate the Area of a Rectangle\n"  
            << " 3. Calculate the Area of a Triangle\n"  
            << " 4. Quit\n\n"
            << "Enter your choice (1-4):";
    cin >> Choice;
    if( !(Choice >= 1 || Choice <=4) ) {
        cout << "Please enter a value from 1 to 4!" <<endl;
    } 
    float area;
    
    switch( Choice ) {
        case 1: //Calculate the area of a circle
            float radius;
            cout << "Enter the radius of circle: ";
            cin >> radius;
            if( radius >= 0 ) {
            area = PI * radius * radius;
            cout << "The area is " << area << endl;
            }
            else
                cout<< "The radius needs to be positive!" << endl;
            break;
            
        case 2: //Calculate the area of a rectangle
            float length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            if( length >= 0 && width>=0 ) {
            area = length * width;
            cout << "The area is " << area << endl;
            }
            else
                cout<< "The length and width must be positive!" << endl;
            break;
            
        case 3: //Calculate the area of a Triangle
            float base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            if( base >= 0 && height >=0) {
            area = base * height*(1/2);
            cout << "The area is " << area << endl;
            }
            else
                cout << "The base and height must be positive!" << endl;
            break;
            
        default: 
            cout << "Goodbye!" << endl;
    }
    //Exit
    return 0;
}

