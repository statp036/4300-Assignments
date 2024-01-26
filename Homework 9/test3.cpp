#include "multchoiceq.h"

int main() {
    MultChoiceQ q3("q3_mc.txt");
    if(q3.execute()) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect." << endl;
    }

    MultChoiceQ q5("q5_mc.txt");
    if(q5.execute()) {
        cout << "Correct!" << endl;
    } else {
        cout << "Fax Machines are not animals" << endl;
    }
    return 0;
}

