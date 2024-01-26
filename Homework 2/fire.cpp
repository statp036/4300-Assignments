#include <iostream>
#include <random>


// Justin Jiang

using std::cout; using std::cin; using std::endl;

// Variables which are declared outside of any function are said to be GLOBAL.
// This means that they will be usable both in main(), as well as any other functions 
// that you choose to write.
//
// Global variables are frowned upon.  But the variables below don't contain
// important information that is likely to change, so making them global isn't particularly treacherous.
std::random_device rd;
std::mt19937 gen( rd() );
std::uniform_real_distribution<>  dist(0.0, 1.0);

const double PROB_CATCH_FIRE = 0.4;  // The const qualifier prevents these variables from being modified;
const double PROB_BURN_OUT = 0.2;    // any attempt to change them later will cause a compilation error.

// decide if a tree is on fire
// return 'F' if it is on fire
char on_fire(char x[]){
    double y = dist(gen);
    if(y <= PROB_CATCH_FIRE){
        return 'F';
    }
    else{
        return 't';
    }
}

// decide if a burning tree is burnt out
// return 'x' if it is burned out
char burn_out(char x[]){
    double y = dist(gen);
    if(y <= PROB_BURN_OUT){
        return 'x';
    }
    else{
        return 'F';
    }
}


int main() {
 for(int b = 0; b<20; b++){ // 20 trials

    char forest[12] = {'x', 't', 't', 't', 't', 'F', 't', 't', 't', 't', 't', 'x'};
    char forestT[12] = {'x', 't', 't', 't', 't', 'F', 't', 't', 't', 't', 't', 'x'}; // temp
 
    // week
    for(int i = 0; i<7; ++i){
        
        // afternoon
        for(int a = 1; a < 11; ++a){
            if(forest[a] == 't' && forest[a+1] == 'F'){
                forestT[a] = on_fire(forest);
            }
            else if(forest[a] == 't' && forest[a-1] == 'F'){
                forestT[a] = on_fire(forest);
            }
        }

        // update state of sites afternoon
        for(int a = 0; a<12; ++a){
            forest[a] = forestT[a];
        }

        // evening
        for(int a = 0; a < 12; ++a){
            if(forest[a] == 'F'){
                forest[a] = burn_out(forest);
            }
        }

        // new Temp array
        for(int a = 0; a<12; ++a){
            forestT[a] = forest[a];
        }

    }

    //print end of week
    for(int i = 0; i<12; ++i){
        cout << forest[i] << " ";
    }
    cout << endl;
 }
    return 0;
}

/*
P(F>=1) = 0.55
from 20 trials
*/