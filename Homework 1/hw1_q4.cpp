// Justin Jiang
#include <iostream>

using namespace std;

int main(){
    char input, next;
    cout << "Enter a letter" << endl;
    cin >> input; 
    // check if letter input is Z or z
    if(input == 'z'){
        next = 'a';
        cout << "Next letter is " << next << endl;
    }
    else if(input == 'Z'){
        next = 'A';
        cout << "Next Letter is " << next << endl;
    }
    else{
        next = input + 1;
        cout << "Next letter is " << next << endl;
    }
}