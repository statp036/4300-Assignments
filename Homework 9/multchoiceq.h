// MultipleChoiceQ class implementation
#ifndef MCQ_H
#define MCQ_H

#include <iostream>
#include <fstream>
#include "question.h"
#include <vector>

class MultChoiceQ:public Question{
private:
    std::vector<string> choices;
public:
    MultChoiceQ(string f);
protected:
    virtual void display(){
        cout << question_text << endl;
        for(int i=0; i<choices.size(); ++i){
            cout << i+1 <<". " << choices[i] << endl;
        }
    }
};

#endif