#include <iostream>
#include <fstream>

using namespace std;
//Justin Jiang

int main(){
    ifstream myfile("sentences.txt");
    string lineT;
    string lineG = " ";
    while( getline(myfile, lineT) ){
        if(lineT.size()>lineG.size()){
            lineG = lineT;
        }
    }
    cout << lineG;

    myfile.close();
}
