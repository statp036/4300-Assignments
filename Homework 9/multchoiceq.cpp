// MultipleChoiceQ class implementation

#include "multchoiceq.h"
#include <iostream>
#include <fstream>
#include "question.h"
#include <vector>

MultChoiceQ::MultChoiceQ(string f){
    ifstream MQuestion(f);
    std::getline(MQuestion,question_text);
    std::getline(MQuestion,correct_answer);
    int i=0;
    string temp;
    while (std::getline(MQuestion, temp)){
        choices.push_back(temp);
    }
    MQuestion.close();
}