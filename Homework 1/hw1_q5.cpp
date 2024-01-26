// Justin Jiang
#include <iostream>
#include <cmath>

using namespace std;

// function to find gcd
int findgcd(int l, int s){
    int c = 1;
    for(int i = sqrt(s) + 1; i > 0; i--){  //use square root to deduct number of possible factors
        if(s%i == 0){           
                int temp = s/i; 
                if(l%temp==0 && temp>c){ //check if other factor of small/i is a factor
                    c = temp; 
                }else if(l%temp!=0 && i > c){ 
                    c = i; 
                }
        }
    }
    return c; 
}

int main(){
    int x, y, gcd;
    cout << "Enter two positive integers to find the GCD" << endl;
    cin >> x >> y;
    if(x>y){
        gcd = findgcd(x,y);}
    else{
        gcd = findgcd(y,x);
    }
    cout << "GCD of " << x << " and " << y  << " is " <<  gcd << endl;
}