// Exam class implementation

#include <iostream>
#include <vector>
#include "exam.h"
#include "question.h"

void exam::add_q(Question *x){
    question_list.push_back(x);
}

void exam::run(){
    int num_correct = 0;
    for(int i=0; i<question_list.size(); ++i){
        if(question_list[i]->execute()){
            num_correct++;
        }
    }
    cout << (float(num_correct/question_list.size())*100) <<"%";
}