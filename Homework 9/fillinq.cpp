// FillInQ class implementation
#include <iostream>
#include <fstream>
#include "fillinq.h"

using std::cout;

FillInQ::FillInQ(string f){
    ifstream FQuestion(f);
    num_blanks = 0;
    std::getline(FQuestion,question_text);
    string temp = " ";
    while(std::getline(FQuestion, correct_answer)){
        if(correct_answer!=question_text){
            temp+=correct_answer;
            num_blanks+=1;
        }
    }
    correct_answer = temp;
    FQuestion.close();
}