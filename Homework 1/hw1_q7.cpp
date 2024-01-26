// Justin Jiang
#include <iostream>

using namespace std;

int main(){
    int x,y,z;
    bool repeat = false;
    cout << "Number? ";
    cin >> x;
    cout << "Number? ";
    cin >> y;
    cout << "Number? ";
    cin >> z;
    while(repeat == false){
        // check if three previous entries are equal
        if(x==y & x==z){
            cout << "Threepeat!" << endl;
            repeat = true;
        }else{
            x = y;
            y = z;
            cout << "Number? ";
            cin >> z;
        }
    }
}