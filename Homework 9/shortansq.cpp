// ShortAnsQ class implementation
#include <iostream>
#include <fstream>
#include "shortansq.h"

using std::cout;

ShortAnsQ::ShortAnsQ(string f){
    ifstream myquestion(f);
    std::getline(myquestion,question_text);
    while(std::getline(myquestion,correct_answer)){
        if(question_text!=correct_answer){
            break;
        }
    }
    myquestion.close();
}