#include <iostream>
#include <fstream>

using namespace std;
// Justin Jiang

int main(){
    ofstream myfile("squares.txt");
    for(int i=1; i <= 200; i++){
        myfile << i*i << endl;;
    }
    myfile.close();
}



