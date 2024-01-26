#include <iostream>

using namespace std;
// Justin Jiang

int part(int x, int y){
    if(y == 1){
        return 1;
    }
    else{
        int total = 0;
        for(int i = 0; i <= x/y; ++i){
            int left = x-(i*y);
            total += part(left, y-1);
        }
        return total;
    }
}

int main(){
    cout << part(20,20);
} 