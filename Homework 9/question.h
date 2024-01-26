// Question class header
#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
using namespace std;

class Question{
protected:
    string question_text;
    string correct_answer;
    virtual void display(){
        cout << question_text;
    };
    virtual string accept_response(){
        string answer;
        cin >> answer;
        return answer;
    };

public:  
    bool execute();
};

#endif