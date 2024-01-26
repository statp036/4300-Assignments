// FillInQ class header
#ifndef FILLINQ_H
#define FILLINQ_H

#include <iostream>
#include "question.h"

using namespace std;

class FillInQ: public Question{
private:
    int num_blanks;
public:
    FillInQ(string f);
protected:
    virtual string accept_response(){
        string temp = " ";
        string answer;
        for(int i = 0; i<num_blanks;++i){
            cin >> answer;
            temp+=answer;
        }
        return temp;
    }
};


#endif