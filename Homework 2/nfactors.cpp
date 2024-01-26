#include <iostream>

// Justin Jiang

using namespace std;

// checks if a number starting from 1 has number of factors equal input from user
// leaves function once it finds the smallest number
// counts the number of factors a number has n factors = user input
int nfactors(int x){
    bool isNum = false;
    int count = 0;
    int num = 1;
    while(isNum == false){
        for(int i=1; i<=num; ++i){
            if(num%i==0){  // count if i is a factor of n
                count += 1;
            }
        }
        if(count == x){
            isNum = true;
        }
        else{  // reset counter and increase number 
            num += 1;
            count = 0;
        }
    }
    return num;
}

int main(){
    int nfact;
    cout << "Enter a integer to number with that number of factors" << endl;
    cin >> nfact;
    cout << "Least number with " << nfact << " is: " << nfactors(nfact) << endl;
}