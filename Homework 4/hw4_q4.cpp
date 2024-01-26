#include <iostream>

using namespace std;
// Justin Jiang

int main(){
    int x = 4, *p, *q;
    int y[4] = {10, 30, 40, 50};
    p = &x;
    *p = 8;
 // *q = 14;
    p = y;
    q = p + 2;
    *p = *(q + 1);
    *q = *p + 1; 
    cout << x << " " << y[0] << " " << y[1] << " " << y[2] << " " << y[3] << endl;
}

/*
Answer:
a) *q = 14
   will cause a error since there was no specific address assigned before assigning *q

b)  8 50 30 51 50

*/