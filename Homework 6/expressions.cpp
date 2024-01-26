#include "rational.h"
#include <iostream>
#include <cmath>

using std::cout; using std::cin; using std::endl; using std::string;

int main(){
// Justin Jiang
    // Expression 1
    Rational a(1,8);
    a += Rational(7);
    
    for(int i=6; i>0; --i){
        a = Rational(1)/a;
        a += Rational(i);
    } 
    cout << a << endl;
    ////////////////////
    
    // Expression 2
    Rational b(1);
    for(int i = 2; i<8; ++i){
        if(i%2==0){
            b -= Rational(1,i);
        }
        else{
            b += Rational(1,i);
        }
    }
    cout << b << endl;
    /////////////////////
    
    // Expression 3
    Rational c(1);
    for(int i = 2; i<=5; ++i){
        c += Rational(1, std::pow(i,3));
    }
    cout << c << endl;
    ////////////////////
}