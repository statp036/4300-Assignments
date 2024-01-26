// Justin Jiang
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x,y;
    double pi = 2*acos(0.0); // value of pi
    cout << "Please enter two positive numbers between 0 and 1" << endl;
    cin >> x >> y;
    cout << (sin(2*pi*x)*(sqrt(-2*log(y)))) << endl; // formula
}