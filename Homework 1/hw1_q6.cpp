// Justin Jiang
#include <iostream>

using namespace std;

int main(){
    double x, temp = 1, i = 2;
    bool div = false;
    cout << "Enter a number" << endl;
    cin >> x;
    while(div == false){
        if(temp > x){
            div = true;
        }
        else{
            temp = temp + (1/i);
            i++;
        }
    }
    cout << "Minimum number of terms to diverge is " << (i-1) << endl; 
    return 0;
}