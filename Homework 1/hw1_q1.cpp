// Justin Jiang
#include <iostream>
#include <string>

using namespace std;

int main(){
    string fname;
    int month, day, year;
    cout << "Please enter your first name, your birthday in mm dd yy form " << endl; 
    cin >> fname >> month >> day >> year;  // input
    cout << fname << "'s birthday is " << month << "/" << day << "/" << year << endl;
}


//////////////
/* 
part b
if Sue Ann 12 11 2010 were entered, 
it will print Sue's first name and birthday but Ann last will not be printed since it doesn't input a second string
if only Peter is entered, 
it will not print anything since it still needs 3 integers to be entered
if Frank 4/8/1912 is entered,
it will only print Frank since 4/8/1912 is a string and not a series of integers
*/ 
/////////////