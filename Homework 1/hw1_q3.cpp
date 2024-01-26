// Justin Jiang
#include <iostream>
#include <cmath>
#include <random>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0.0,1.0);
    double pi = 2*acos(0.0); // value of pi
    double x = dis(gen), y = dis(gen);
    cout << (sin(2*pi*x)*(sqrt(-2*log(y)))) << endl;
}